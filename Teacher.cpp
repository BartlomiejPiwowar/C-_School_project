#include "Teacher.h"

Teacher::Teacher( string name, int age, double salary, int workage, bool isTutor, string subject, string clas ) : Worker( name, age, salary, workage )
{
	setTutor( isTutor );
	setSubject( subject );
	setClass( clas );
}

double Teacher::calculateTax( ) const
{
	double brut = brutto( ); //pensja brutto
	double admin = 0.2 * brut - KWOTA_UZYSK;
	double tech = 0.8 * brut - 0.5 * KWOTA_UZYSK;
	double tax = ( tech + admin ) * 0.18 - KWOTA_WOLNA;


	if( tax < 0 )
	{
		tax = 0;
	}

	return tax;

}

double Teacher::brutto( ) const
{

	double brutto = getSalary( );
	double tax = 0;
	int years = 0;

	if( getWorkAge( ) > 20 )
	{
		years = 20;
		brutto += brutto * years / 100;
	}
	else if( getWorkAge( ) >= 5 && getWorkAge( ) <= 20 )
	{
		years = getWorkAge( );
		brutto += brutto * years / 100;
	}
	if( isTutor( ) )
	{
		brutto = brutto + 400;
	}
	return brutto;
}

double Teacher::calculateNetto( ) const
{
	return brutto( ) - calculateTax( );
}

void Teacher::PrintWorker( )
{
	cout << "Nauczyciel" << endl;
	cout << getName( ) << " " << getSubject( );
	if( isTutor( ) )
	{
		cout << " wychowawca: " << getNameClass( );
	}
	cout << " pensja brutto: " << brutto( );
	cout << " podatek= " << calculateTax( ) << " pensja netto: " << calculateNetto( ) << endl;
}
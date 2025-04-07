#include "Admin.h"


Admin::Admin( string name, int age, double salary, int workage, Positions position ) : Worker( name, age, salary, workage )
{
	setPosition( position );
}

double Admin::calculateTax( ) const
{
	double tax = ( ( ( getSalary( ) - KWOTA_UZYSK ) * PODATEK ) - KWOTA_WOLNA );
	if( tax > 0 )
	{
		return tax;
	}
	else
		return 0;

}


double Admin::calculateNetto( ) const
{
	double salary = getSalary( );
	return ( salary - calculateTax( ) );

}

void Admin::PrintWorker( )
{
	cout << "Pracownik administracyjny" << endl;
	cout << getName( ) << " " << getPositionName( ) << " pensja brutto: " << getSalary( );
	cout << " podatek= " << calculateTax( ) << " pensja netto: " << calculateNetto( );
}

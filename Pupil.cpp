#include "Pupil.h"


int Pupil::m_baseID = 10000;


Pupil::Pupil( string name, int age, string className ) noexcept : Person( name, age )
{
	setClassName( className );
	m_ID = to_string( m_baseID ); //dawanie ID
	clearNotes( );
	m_baseID++;
}

Pupil::~Pupil( ) {};

void Pupil::clearNotes( )
{
	memset( m_Notes, 0, MAXSUBJECTS * sizeof( double ) );
	m_Ave = 0;
}
double Pupil::calcAve( )
{
	double ave = 0;
	int count = 0;

	for( int sub = POLSKI; sub <= MAXSUBJECTS; sub++ )
	{
		if( m_Notes [sub] > 1 )
		{
			ave += m_Notes [sub];
			count++;
		}
	}
	return m_Ave = ( count ) ? ave / count : 0;
}
double Pupil::getAve( )
{
	return calcAve( );
}
void Pupil::setNote( Subjects subject, double note )
{
	if( subject >= POLSKI && subject < MAXSUBJECTS && note>2 && note <= 5 ) {
		m_Notes [subject] = note;
	}
	else {
		cout << "Nieprawid³owa ocena. Oczekiwano wartoœci od 2 do 5!" << endl;
	}
}

void Pupil::printPupil( )
{
	cout << getID( ) << ' ' << getName( ) << " (" << getClassName( ) << "). " << getAge( ) << "lat ";
	cout << "average= " << calcAve( ) << endl;
	cout << '\t';
	printOutfit( );
}

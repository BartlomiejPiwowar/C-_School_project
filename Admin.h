#pragma once
#include "Worker.h"

#define MAXPOSITIONS starszy_specjalista+1

enum Positions { mlodszy_specjalista, specjalista, starszy_specjalista };

class Admin : public Worker
{
public:
	Admin( string name = "", int age = 0, double salary = 0, int workage = 0, Positions position = mlodszy_specjalista );
	virtual double calculateNetto( ) const;
	double calculateTax( ) const;


	Positions getPosition( );
	const char* getPositionName( );
	void setPosition( Positions position );

	void PrintWorker( );


private:
	Positions m_position;
};



//======== INLINE ==========



inline Positions Admin::getPosition( )
{
	return m_position;
}

inline void Admin::setPosition( Positions position )
{
	if( position >= mlodszy_specjalista && position <= MAXPOSITIONS )
		m_position = position;

}

inline const char* Admin::getPositionName( )
{
	switch( m_position )
	{
	case mlodszy_specjalista:
		return "mlodszy_specjalista";
	case specjalista:
		return "specjalista";
	default:
		return "starszy_specjalista";
	}
}
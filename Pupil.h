#pragma once
#include "Person.h"

enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };

#define MAXSUBJECTS NIEMIECKI+1

class Pupil : public Person
{
public:
	Pupil( string name = "", int age = 0, string className = "" ) noexcept;
	virtual ~Pupil( );

	void setClassName( string newClassname );
	string getClassName( ) const;
	string getID( ) const;

	void clearNotes( );
	double calcAve( );
	double getAve( );
	void setNote( Subjects subject, double note );

	void printPupil( ); //wywoluje pritnoutfit
	virtual void printOutfit( ) = 0;

protected:
	string m_ID;

private:
	string m_ClassName;
	double m_Ave;
	double m_Notes [MAXSUBJECTS];
	static int m_baseID;
};




//=========== INLINE ===============




inline void Pupil::setClassName( string newClassname )
{
	this->m_ClassName = newClassname;

}
inline string Pupil::getClassName( ) const
{
	return this->m_ClassName;
}
inline string Pupil::getID( ) const
{
	return this->m_ID;
}
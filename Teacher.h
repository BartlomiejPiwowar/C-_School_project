#pragma once
#include "Worker.h"
class Teacher : public Worker
{
public:
	Teacher( string name = "", int age = 0, double salary = 0, int workage = 0, bool isTutor = 0, string subject = "", string clas = "" );
	Teacher& operator = ( const Teacher& t ) = default;

	virtual double calculateNetto( ) const;
	double calculateTax( ) const;
	double brutto( ) const;

	bool isTutor( ) const;
	string getSubject( ) const;
	string getNameClass( ) const;

	void setTutor( bool tutoring );
	void setSubject( string strSubject );
	void setClass( string className );

	void PrintWorker( );

private:
	bool m_isTutor;
	string m_Subject; 
	string m_NameCLass; 
};




//=========== INLINE ===========



inline bool Teacher::isTutor( ) const
{
	return m_isTutor;
}

inline string Teacher::getSubject( ) const
{
	return m_Subject;
}

inline string Teacher::getNameClass( ) const
{
	return m_NameCLass;
}

inline void Teacher::setTutor( bool tutoring )
{
	m_isTutor = tutoring;
}

inline void Teacher::setSubject( string strSubject )
{
	m_Subject = strSubject;
}

inline void Teacher::setClass( string className )
{
	if( isTutor( ) )
	{
		m_NameCLass = className;
	}
}
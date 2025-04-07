#pragma once
#include <iostream>

#include "Person.h"
using namespace std;


#define KWOTA_UZYSK 111.25 
#define PODATEK 0.18
#define KWOTA_WOLNA 556.02

class Worker : public Person
{
public:
	Worker( string name = "", int age = 0, double salary = 0.0, double workage = 0 );

	void setSalary( double nSalary );
	double getSalary( ) const;

	void setWorkAge( double workage );
	double getWorkAge( ) const;

	void PrintWorkers( );
	virtual void PrintWorker( ) = 0;

private:
	double m_Salary; //brutto
	double m_nettoSalary;
	int m_WorkAge; //stazpracy
};






//========== INLINE =============



inline void Worker::setSalary( double nSalary )
{
	this->m_Salary = nSalary;
}
inline double Worker::getSalary( ) const
{
	return this->m_Salary;
}

inline void Worker::setWorkAge( double workage )
{
	this->m_WorkAge = workage;
}
inline double Worker::getWorkAge( ) const
{
	return this->m_WorkAge;
}
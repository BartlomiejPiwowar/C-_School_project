#include "Person.h"

Person::Person( string name, int age ) noexcept
{
	setPerson( name, age ); //osoba to imie nazwisko i wiek
}

Person::~Person( ) { };

#include "Worker.h"

Worker::Worker( string name, int age, double salary, double workage ) : Person( name, age )
{
	setSalary( salary );
	setWorkAge( workage );
}

void Worker::PrintWorkers( )
{
	PrintWorker( );
}
/*
	CLASS:
	1. Create default constructors and destructors
	2. Create methods
	3. But why do I need to use std::cout unlike my example?
*/

#include "iostream"

class Computer{

public:

	Computer();

	~Computer();

	void setSpeed( int p );

	int readspeed();

protected:

	int procSpeed;

};

Computer::Computer(){

	procSpeed = 0;
}

Computer::~Computer(){

}

void Computer::setSpeed( int p ){

	procSpeed = p;
}

int Computer::readspeed(){

	return procSpeed;
}


int main(){

	Computer comp;

	comp.setSpeed(100);

	std::cout << comp.readspeed();

}
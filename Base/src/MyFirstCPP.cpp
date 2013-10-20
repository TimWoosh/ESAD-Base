//============================================================================
// Name        : MyFirstCPP.cpp
// Author      : Tim Wöstemeier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "BaseObject.h"

using namespace std;

int main() {

	cout << __PRETTY_FUNCTION__ << endl;
	BaseObject::setDebugging(true);

	cout << "debugging mode";
	if(BaseObject::isDebugOn())
		cout << " on ";
	else
		cout << " off";
	cout << endl;

	BaseObject bo("Wim");
	BaseObject boA("Dirk");
	BaseObject boo("");

	boo = boA;


	cout << "bo is: " << bo << "Tof he! " << endl;
	cout << "boA is: " << boA << "Tof he! " << endl;
	cout << "boo is: " << boo << "Tof he! " << endl;

	return 0;
}

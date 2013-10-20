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

	BaseObject bo = BaseObject();
	bo.setName("Berbl");

	BaseObject bo2("Henkie");
	BaseObject bo3("Henkie");
	BaseObject bo4;

	return 0;
}

#include "IsoTriangle.h"
#include "IsoTrapezoid.h"
#include "polygon.h"
#include <iostream>

int main(){
	cout << "****************TEST SUITE****************"<< endl;
	cout << "Suite of tests to check the correct behaviour of the sub-class IsoTriangle" <<endl;
	
	cout << "\n\nDEFAULT CONSTRUCTOR: should be all param to 0\n\n" << endl;
	IsoTriangle obj1;
	obj1.Dump();

	cout << "\n\n******************************PARAMETER CONSTRUCTOR: should be 1 & 2"<<endl;
	IsoTriangle obj2 (1,2);
	obj2.Dump();

	cout << "*********************************PARAMETER CONSTRUCTOR: trying to input -1 and -2: " << endl;
	IsoTriangle obj3 (-1, -2);
	obj3.Dump();

	cout << "*********************************COPY CONSTRUCTOR: should be the same as obj2: " << endl;
	IsoTriangle obj4 = obj2;
	obj4.Dump();
	return 0;
}


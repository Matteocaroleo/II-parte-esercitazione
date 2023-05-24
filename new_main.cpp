#include "IsoTriangle.h"
#include "IsoTrapezoid.h"
#include "polygon.h"
#include <iostream>

int main(){
	cout << "****************TEST SUITE****************"<< endl;
	cout << "Suite of tests to check the correct behaviour of the sub-class IsoTriangle" <<endl;
	
	cout << "\n\n*************************DEFAULT CONSTRUCTOR: should be all param to 0\n\n" << endl;
	IsoTriangle obj1;
	obj1.Dump();

	cout << "\n\n*************************************PARAMETER CONSTRUCTOR: should be 1 & 2"<< endl;
	IsoTriangle obj2 (1,2);
	obj2.Dump();

	cout << "*****************************PARAMETER CONSTRUCTOR: trying to input -1 and -2:" << endl;
	IsoTriangle obj3 (-1, -2);
	obj3.Dump();

	cout << "*********************************COPY CONSTRUCTOR: should be the same as obj2:" << endl;
	IsoTriangle obj4 (obj2);
	obj4.Dump();

	cout << "**DESTRUCTOR: should print 2 constructor and 2 destructor: " << endl;
        IsoTriangle objTemp;
	objTemp.~IsoTriangle();	

	cout << "*******************COMPARISON OPERATOR: should print 'succesful' if it works: " << endl;
	(obj4 == obj2)? cout << "SUCCESFULL!"<< endl : cout << "FAIL!" << endl;

	cout << "*******************ASSIGNMENT OPERATOR: should print 'succesful' if it works: " << endl;
	obj3 = obj4;
	(obj4 == obj3)? cout << "SUCCESFULL!"<< endl : cout << "FAIL!" << endl;

	cout << "*****************CHAINING OF OPERATORS: should print 'succesful' if it worls: " << endl;
	obj1 = obj2 = obj3 = obj4;
	(obj1 == obj2 && obj1 == obj3 && obj1 == obj4)? cout << "SUCCESFULL!" << endl : cout << "FAIL!" << endl;

	cout << "**********************************INIT FUNCTION: should print parameters = 0: " << endl;
	obj4.Init();
	obj4.Dump();

	cout << "********************************COPY INIT FUNCTION: should print 'succesful': " << endl;
	obj3.Init(obj4);
	obj3.Dump();
	(obj4 == obj3)? cout << "SUCCESFULL!"<< endl : cout << "FAIL!" << endl;

	cout << "*****************************RESET FUNCTION: should print all parameters = 0: " << endl;
	obj2.Reset();
	obj2.Dump();
	

	cout << "************************************************SETTERS: setting 'base' to 3: " << endl;
	
	obj1.SetBase(3);
	obj1.Dump();

	cout << "***********************************************SETTERS: setting 'base' to -1: " << endl;
	obj1.SetBase (-1);
	obj1.Dump();

	cout << "**********************************************SETTERS: setting 'height' to 3: " << endl;
	
	obj1.SetHeight(3);
	obj1.Dump();

	cout << "*********************************************SETTERS: setting 'height' to -1: " << endl;
	obj1.SetHeight(-1);
	obj1.Dump();

	cout << "**********************************************SETTERS: setting params to 4,6: " << endl;
	obj1.SetParam (4,6);
	obj1.Dump();

	cout << "********************************************SETTERS: setting params to -4,-6: " << endl;
	obj1.SetParam (-4,-6);
	obj1.Dump();

	cout << "*******************************************GETTERS: params of previous object:" << endl;
	cout << "\nside: " << obj1.GetSide();
	cout << "\tbase: " << obj1.GetBase();
	cout << "\theight: " << obj1.GetHeight() << endl;

	cout << "**************************************************************UTILITIES: Draw: " <<endl;
       	obj1.Draw();

	cout << "************************************************************TEST FOR POLYGON: " << endl;
	cout << "Area of obj 1: "<<obj1.GetArea() << endl;
	cout << "Perimeter of obj 1: "<<obj1.GetPerimeter() << endl;

	cout << "************************POLYMORPHISM TEST: should print base and height = 5, 6" << endl;
       	Polygon* P;
	P = new IsoTriangle(5,6);
	cout << P->GetArea() << endl; 	
	cout <<"Should print dump of polygon: " <<endl; 
       	P->Dump();
	cout << "Should print perimeter of Isoriangle, cioè 18\n" << P->GetPerimeter() << endl;
	cout <<"DELETING POLYGON: should print destructor of polygon and isoTriangle: " << endl;
	delete P;	



	cout << "***************************END OF TESTING*************************************" << endl;
	return 0;
}






	
	
	

#include "new_isotriangle.h"

/////////////////////////////-CONSTRUCTORS-///////////////////////////////////////

/// @brief default constructor 
new_isotriangle::new_isotriangle() {

//	cout << "new_isotriangle - constructor - default" << endl;
	Init();
}

/// @brief costructor with attributes set
/// @param b stands for "base". Uses float 
/// @param h stands fot "height. Uses float
new_isotriangle::new_isotriangle(float b, float h) {
	Init();
	cout << "new_isotriangle - constructor" << endl;
	
		if (b <= 0. || h <= 0.) {
			cout << "WARNING: Rectangle-constructor: base and height should be > 0" << endl;

		}
		else {
			base = b;
			height = h;
		}

		Area();
		Perimeter();

}

/// @brief copy constructor 
/// @param p reference to the new_isotriangle object that should be copied 
new_isotriangle::new_isotriangle(const new_isotriangle& p) {

	cout << "new_isotriangle - copy constructor" << endl;

	Init(p);
}

/// @brief destructor
new_isotriangle::~new_isotriangle() {

//	cout << "new_isotriangle - destructor" << endl;
	Reset();

}

////////////////////////////////-OPERATOR-////////////////////////////////////////////////////////////

/// @brief overload of operator = 
/// @param p reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
new_isotriangle& new_isotriangle::operator=(const new_isotriangle& p) {
	cout << "new_isotriangle - operator =" << endl;
	Init(p);
	return *this;

}

/// @brief overload of operator == 
/// @param p reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool new_isotriangle::operator==(const new_isotriangle& r) {
	if (r.height == height && r.base == base)
		return true;

	return false;
}

//////////////////////////////-INIT & RESET-/////////////////////////////////////////
/// @brief default initialization of the object
void new_isotriangle::Init() {
	Reset();
	base = 0.;
	height = 0.;
	//updates the Area and Perimeter of the polygon. This repets throw the next function with the same goal.
//	Area();
//	Perimeter();
}


/// @brief initialization of the object as a copy of an object 
/// @param it reference to the object that should be copied 
void new_isotriangle::Init(const new_isotriangle& it) {
	Reset();
	base = it.base;
	height = it.height;

	Area();
	Perimeter();
}

/// @brief total reset of the object  
void new_isotriangle::Reset() {
	base = 0.;
	height = 0.;
	
	Area();
	Perimeter();
}

////////////////////////////////-SETTERS//////////////////////////////////////////////
/// @brief SetHeight sets the height value. base is a protected variable 
/// @param h is the give value used to set the base
void new_isotriangle::SetBase(float b) { 
	if (b < 0) {
		cout << "WARNING - new_isotriangle - SetBase: Cannot set the base with an invalid value";
		return;
	}
	base = b;
//	Area();
//	Perimeter();
};
/// @brief SetHeight sets the height value. Height is a protected variable 
/// @param h is the given value used to set the height
void new_isotriangle::SetHeight(float h) { 
	if (h < 0) {
		cout << "WARNING - new_isotriangle - SetBase: Cannot set the height with an invalid value";
		return;
	}
	height = h;
	Area();
	Perimeter();
};
/// @brief SetParam sets both height and base value. both are protected variables
/// @param h is the given value used to set the height
/// @param b is the given value used to set the base
void new_isotriangle::SetParam(float b, float h) {
	if (h < 0) {
		cout << "WARNING - new_isotriangle - SetBase: Cannot set the height with an invalid value";
		return;
	}

	if (b < 0) {
		cout << "WARNING - new_isotriangle - SetBase: Cannot set the base with an invalid value";
		return;
	}
	base = b;
	height = h;
	Area();
	Perimeter();
}
/////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////-GETTERS&FUNCTIONS-///////////////////////////////////

/// @brief Area sets the Area of the new_isotriangle with the current base and height
/// @return a float area valure
float new_isotriangle::Area() {
	area = (base * height / 2);
	return area;
}

/// @brief Perimeter sets the perimeter of the new_isotriangle with the current base and height
/// @return a float perimeter valure
float new_isotriangle::Perimeter() {
	perimeter = (base + 2 * GetSide());
	return perimeter;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////-DUMP-/////////////////////////////////////////////////////////
///@brief used to print Area and Perimeter values
void new_isotriangle::Draw() {
	cout << "Area--> " << Area() <<endl;
	cout << "Perimeter--> " << Perimeter() <<endl;
}

/// @brief for debugging: all about the object
void new_isotriangle::Dump() {

	cout << endl;
	cout << "---new_isotriangle---" << endl;
	cout << endl;

	cout << "Base = " << base << endl;
	cout << "height = " << height << endl;
	cout << "side = " << GetSide() << endl;
	cout << endl;
}



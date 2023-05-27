/*! \file new_isotriangle.h
	\brief Declaration of the leaf class new_isotriangle

	Details.
*/


#ifndef ISOTRAP_H
#define ISOTRAP_H

#include<iostream>
#include "polygon.h"
#include <math.h>

/// @class new_isotriangle
/// @brief an abstract leaf class for new_isotriangles
class new_isotriangle : public Polygon {
protected:
	float base;
	float height;

	virtual float Area();
	virtual float Perimeter();
public:
	/// @name CONSTRUCTORS(default,set and copy)/DESTRUCTOR
	/// @{
	new_isotriangle();
	new_isotriangle(float b, float h);
	new_isotriangle(const new_isotriangle& it);
	~new_isotriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	new_isotriangle& operator=(const new_isotriangle& it);
	bool operator==(const new_isotriangle& it);
	/// @}

	/// @name INIT&RESET
	/// @{
	void Init();
	void Init(const new_isotriangle& it);
	void Reset();
	/// @}

	/// @name SETTERS
	/// @{
	void SetBase(float b);
	void SetHeight(float h);
	void SetParam(float b, float h);
	/// @}

	/// @name GETTERS
	/// @{
	float GetSide() { return (float)sqrtf(pow((base/2), 2) + pow(height, 2)); };
	float GetBase() { return base; };
	float GetHeight() { return height; };
	/// @}


	/// @name UTILITIES
	/// @{
	void Draw();
	void Dump();
	/// @}

};

#endif

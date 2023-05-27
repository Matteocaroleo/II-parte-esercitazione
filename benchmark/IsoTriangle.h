/*! \file IsoTriangle.h
	\brief Declaration of the leaf class IsoTriangle

	Details.
*/


#ifndef ISOTRIANGLE_H
#define ISOTRIANGLE_H

#include<iostream>
#include "polygon.h"
#include <math.h>

/// @class IsoTriangle
/// @brief an abstract leaf class for IsoTriangles
class IsoTriangle : public Polygon {
protected:
	float base;
	float height;

	virtual float Area();
	virtual float Perimeter();
public:
	/// @name CONSTRUCTORS(default,set and copy)/DESTRUCTOR
	/// @{
	IsoTriangle();
	IsoTriangle(float b, float h);
	IsoTriangle(const IsoTriangle& it);
	~IsoTriangle();
	/// @}

	/// @name OPERATORS
	/// @{
	IsoTriangle& operator=(const IsoTriangle& it);
	bool operator==(const IsoTriangle& it);
	/// @}

	/// @name INIT&RESET
	/// @{
	void Init();
	void Init(const IsoTriangle& it);
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

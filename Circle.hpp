//Circle Class Definition

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include <sstream>
#include "Point.hpp"
#include "Shape.hpp"
#define _USE_MATH_DEFINES 
#include <math.h>

class Circle : public Shape {
public:
	//constructors
	Circle();
	Circle(const Point & p, double r);
	Circle(const Circle & c);
	//getter functions
	const Point getCenter() const;
	const double getRadius() const;
	//setter functions
	void setCenter(const Point & p);
	void setRadius(double r);
	//diameter function
	const double diameter() const;
	//area function
	const double area() const;
	//circumference function
	const double circumferencr() const;
	//tostring function
	std::string toString() const;
	//Destructor
	~Circle();
	//assignment operator
	Circle & operator= (const Circle & source);
	
private:
	Point center;
	double radius;
};

#endif

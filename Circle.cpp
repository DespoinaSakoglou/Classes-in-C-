//Circle Class Implementation

#include <iostream>
#include <sstream>
#include "Circle.hpp"
#include "Point.hpp"
#include "Shape.hpp"

//constructors

//Default constructor
Circle::Circle() : Shape::Shape() { 
	std::cout << "Circle Default Constructor\n"; 
}

//Parameter constructor
// We use const arguments to prohibit the modification of the argument
// We pass object by reference so as not to use a lot of memory
Circle::Circle(const Point & p, double r) : Shape::Shape(), center(p), radius(r) { 
	std::cout << "Circle Parameter Constructor\n"; 
}

//Copy constructor
Circle::Circle(const Circle & c) : Shape::Shape(), center(c.center), radius(c.radius) { 
	std::cout << "Circle Copy Constructor\n"; 
}

//getter functions
const Point Circle::getCenter() const { 
	return center; 
}
const double Circle::getRadius() const { 
	return radius;
}

//setter functions
void Circle::setCenter(const Point & p) { 
	/*center.setX(p.getX());
	center.setY(p.getY());*/
	center = p;
}
void Circle::setRadius(double r) { 
	radius = r; 
}

//diameter function
const double Circle::diameter() const { 
	return radius * 2; 
}

//area function
const double Circle::area() const { 
	return (M_PI * pow(radius, 2)); 
}

//circumference function
const double Circle::circumferencr() const { 
	return M_PI * 2 * radius; 
}

//toString function
std::string Circle::toString() const {
	std::stringstream stringDescription;
	stringDescription << "Circle of center " << center.toString() << " and radius " << getRadius();
	return stringDescription.str();
}

//Destructor
Circle::~Circle() =default;

Circle & Circle::operator= (const Circle & source) {
	if (this != &source) {
		center = source.center;
		radius = source.radius;
	}
	return *this;
}

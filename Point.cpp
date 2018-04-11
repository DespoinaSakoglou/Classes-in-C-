//Point Class Implementation

#include <iostream>
#include <sstream>
#include <cmath>
#include "Point.hpp"
#include "Shape.hpp"


//constructors
//Default constructor
Point::Point() : Shape::Shape(), m_x(0), m_y(0) { 
		std::cout << "Point Default Constructor\n";
}

//Parameter constructor
Point::Point(double x, double y) : Shape::Shape(), m_x(x), m_y(y) { 
	std::cout << "Point Parameter Constructor\n"; 
}

//Copy constructor
Point::Point(const Point & p) : Shape::Shape(), m_x(p.m_x), m_y(p.m_y) {
	std::cout << "Point Copy Constructor\n"; 
}

//methods
const double Point::getX() const { 
	return m_x; 
}
const double Point::getY() const {
	return m_y; 
}
void Point::setX(double x) {
	m_x = x; 
}
void Point::setY(double y) {
	m_y = y; 
}

std::string Point::toString() const {
	std::stringstream stringDescription;
	stringDescription << "Point (" << m_x << "," << m_y << ")";
	return stringDescription.str();
}
const double Point::distance() const {
	return sqrt(pow(this->m_x, 2) + pow(this->m_y, 2));
}
const double Point::distance(const Point & p) const {
	return sqrt(pow(this->m_x - p.m_x, 2) + pow(this->m_y - p.m_y, 2));
}

//destructor
Point::~Point() {
	std::cout << "Point default destructor\n";
}

Point Point::operator - () const {					// Negate the coordinates, that is return the point with negated coordinates
	return Point(-m_x, -m_y);
}
Point Point::operator * (double factor) const {  // Scale the coordinates, that is return the point with scaled coordinates to a factor
	return Point(factor * m_x, factor * m_y);
}
Point Point::operator + (const Point & p) const { // Add coordinates, that is returns the point after this point's and the iputted point's coordinates are added 
	return Point( (m_x + p.m_x), (m_y + p.m_y) );
}
bool Point::operator == (const Point & p) const { // Equally compare operator, to compare if two points are equal, returns 1 if true(equal) or returns 0 if false(not equal)
	return ((m_x == p.m_x) && (m_y == p.m_y));
}
Point & Point::operator = (const Point & source) { // Assignment operator, changes the current object so it's not const, returns a reference, not a copy
	//check if the address of the source point is different than the address of the current object, and if it's different make the assignment
	if (this != &source) {
		m_x = source.m_x;
		m_y = source.m_y;
	}
	return *this;
}
Point& Point::operator *= (double factor) {     // Scale the coordinates & assign, changes the current object so it's not const, returns a reference, not a copy
	m_x *= factor;
	m_y *= factor;
	return *this;
}

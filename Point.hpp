//Adding operators to the Point Class

//Point Class Definition

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <sstream>
#include "Shape.hpp"

class Point : public Shape {
public:

	//constructors
	Point();
	Point(double x, double y);
	Point(const Point & p);

	//methods
	const double getX() const;
	const double getY() const;
	void setX(double x);
	void setY(double y);

	std::string toString() const;
	const double distance() const;
	const double distance(const Point & p) const;

	//destructor
	~Point();

	Point operator - () const;               // Negate the coordinates. 
	Point operator * (double factor) const;  // Scale the coordinates. 
	Point operator + (const Point & p) const; // Add coordinates. 
	bool operator == (const Point & p) const; // Equally compare operator. 
	Point& operator = (const Point & source); // Assignment operator. 
	Point& operator *= (double factor);      // Scale the coordinates & assign.

private:
	double m_x, m_y;
};

#endif



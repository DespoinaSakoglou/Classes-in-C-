//Line Class Implementation

#include <iostream>
#include <sstream>
#include <cmath>
#include "Line.hpp"
#include "Shape.hpp"

//Constructors

//Default constructor
Line::Line() : Shape::Shape(), start_p(0, 0), end_p(0, 0) { std::cout << "Line Default Constructor\n"; }



//Parameter constructor
Line::Line(const Point p1, const Point p2) : Shape::Shape(), start_p(p1), end_p(p2) { std::cout << "Line Parameter Constructor\n"; }

//Copy constructor
Line::Line(const Line & l) : Shape::Shape(), start_p(l.start_p), end_p(l.end_p) { std::cout << "Line Copy Constructor\n"; }

//Methods

//Overloaded Getters
const Point & Line::Start() const { return start_p; }
const Point & Line::End() const { return end_p; }

// Overloaded Setters
void Line::Start(const Point & p1) {
	start_p.setX(p1.getX());
	start_p.setY(p1.getY());
}
void Line::End(const Point & p2) {
	end_p.setX(p2.getX());
	end_p.setY(p2.getY());
}

//toString function
std::string Line::toString() const {
	std::stringstream stringDescription;
	stringDescription << "Line between Start " << start_p.toString() << " and End " << end_p.toString();
	return stringDescription.str();
}

//Lenght function using delegation
const double Line::length() const {
	return start_p.distance(end_p);
}

//Destructor
Line::~Line() {
	std::cout << "Line default destructor\n";
}

//Assignment operator
Line & Line::operator= (const Line & source) {
	if (this != &source) {
		start_p = source.start_p;
		end_p = source.end_p;
	}
	return *this;
}
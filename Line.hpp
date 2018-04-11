//Line Class Definition

//composition
#ifndef LINE_HPP
#define LINE_HPP

#include <iostream>
#include <sstream>
#include "Point.hpp"
#include "Shape.hpp"

class Line : public Shape {

public:

//Constructors
	//Default constructor
	Line();
	//Parameter constructor
	Line(const Point p1, const Point p2);
	//Copy constructor
	Line(const Line & l);

//Methods
	//Getters
	const Point & Start() const;
	const Point & End() const;
	//Setters
	void Start(const Point & p1);
	void End(const Point & p2);
	
	//toString function
	std::string toString() const;

	//Lenght function
	const double length() const;

	//Destructor
	~Line();

	//Assignment operator
	Line & operator= (const Line & source);
	
private:

	Point start_p, end_p;

};

#endif


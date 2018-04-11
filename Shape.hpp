//Shape base class definition


#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <sstream>

class Shape {
public:
	//default constructor using rand() function
	Shape();

	//copy constructor that copies the id member
	Shape(const Shape & s);

	//assignment operator that copies the id member
	Shape & operator=(const Shape & s) {
		m_id = s.m_id;
	}

	//toString() function
	virtual std::string toString() const = 0;

	//ID function to retrieve the id of the shape
	const int ID() const;
	
	//destructor
	~Shape();

private:
	int m_id;	//id number data member of base class
};

#endif


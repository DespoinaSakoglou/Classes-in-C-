//Shape class implementation

#include <iostream>
#include <sstream>
#include "Shape.hpp"

//default constructor using rand() function
Shape::Shape() : m_id(std::rand()) { std::cout << "Shape Default Constructor\n"; }

//copy constructor that copies the id member
Shape::Shape(const Shape & s) : m_id(s.m_id) {}



//ID function to retrieve the id of the shape
const int Shape::ID() const {
	return m_id;
}

//destructor
Shape::~Shape() { std::cout << "Shape default destructor\n"; }
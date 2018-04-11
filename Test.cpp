//Testing of classes

#include <iostream>
#include <cmath>
#include "Shape.hpp"
#include "Line.hpp"
#include "Point.hpp"
#include "Circle.hpp"

int main() {
	//Shape s;                           // Create shape. => in this modification shape can't be instantiated because of virtual tostring function
	Point p(10, 20);                   // Create point. => shape default constructor (called), point parameter constructor and destructor, and shape destructor
	Line l(Point(1,2), Point(3, 4));   // Create line. 
	Circle c(p, 4);						// Create circle.

	//std::cout << s.toString() << std::endl;          // Print shape. => in this modification shape can't be instantiated because of virtual tostring function
	std::cout << p.toString() << std::endl;          // Print point. 
	std::cout << l.toString() << std::endl;          // Print line. 
	std::cout << c.toString() << std::endl;          // Print circle.
	
	//std::cout << "Shape ID: " << s.ID() << std::endl;  // ID of the shape. => in this modification shape can't be instantiated because of virtual tostring function
	std::cout<<"Point ID: "<<p.ID()<< std::endl;  // ID of the point. 
	std::cout<<"Line ID: "<<l.ID()<<std::endl;   // ID of the line.
	
	Shape* sp;                         // Create pointer to a shape variable. 
	sp=&p;                             // Point in a shape variable. Possible? 
	std::cout<<sp->toString()<<std::endl;        // What is printed? now it calls the toString of the point
	
														
	return 0;
}
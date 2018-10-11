/* Name: Howard Chen
 * ID: 005536087
 * Class: CECS 282
 * Instructor: Professor Minhthong Nguyen
 * Date: 10 October 2018
 * Purpose : Program demonstrate Polymorphism with a
 Shape base class and a Triangle derived class. Calculates triangle area, perimeter.
 Prompts user for sides,  Color , and filled/notfilled triangle.
 *
 */
#ifndef SHAPE_H
#define SHAPE_H
#include <string> 

using namespace std;

class Shape {
public:
    Shape();
    Shape(double side1, double side2, double side3,
          string color1, bool filled1 );
    double getSideOne() const;
    double getSideTwo() const;
    double getSideThree() const;
    string getColor() const;
    bool getFilled() const;
    virtual double getPerimeter() const = 0;
    virtual double getArea() const = 0;
protected :
    double sideOne;
    double sideTwo;
    double sideThree;
    string color;
    bool filled;
    
};


#endif /* SHAPE_H */


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
#include "Shape.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle : public Shape{
public :
    Triangle();
    Triangle(double side1, double side2, double side3, string color, bool filled);
    virtual double getPerimeter() const;
    virtual double getArea() const;


private:
    double sideOne;
    double sideTwo;
    double sideThree;
    string color;
    bool filled;
    
    
};
#endif





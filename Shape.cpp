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

#include <cstdlib>
#include "Shape.h"
#include<string>

using namespace std;

Shape :: Shape() {
    
}
Shape :: Shape(double side1, double side2, double side3,
                     string color1, bool filled1 ){
    sideOne = side1;
    sideTwo = side2;
    sideThree = side3;
    color = color1;
    filled = filled1;
}

double Shape :: getSideOne() const{
    return sideOne;
}
double Shape :: getSideTwo() const{
    return sideTwo;
}

double Shape :: getSideThree() const{
    return sideThree;
}

string Shape :: getColor() const{
    return color;
}

bool Shape :: getFilled() const{
    return filled;
}


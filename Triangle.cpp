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
#include "Triangle.h"
#include <cmath>
#include<string>

using namespace std;
Triangle::Triangle() {
    sideOne = 1.0;
    sideTwo = 1.0;
    sideThree = 1.0;
    filled = false;
    color = "grey";
}

Triangle :: Triangle(double side1, double side2, double side3, 
                     string color1, bool filled1 ) : Shape( side1,  side2,  side3,
 color1,  filled1 ){
    sideOne = side1;
    sideTwo = side2;
    sideThree = side3;
    color = color1;
    filled = filled1;
}

double  Triangle :: getPerimeter() const{
    return sideOne + sideTwo + sideThree;
    
}
double Triangle :: getArea() const{
    double s =  getPerimeter() /2;
    
    return sqrt( s * (s - sideOne) * (s - sideTwo) * (s - sideThree)); 
    
}






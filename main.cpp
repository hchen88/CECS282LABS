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
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "Triangle.h"
#include "Shape.h"

using namespace std;

/*
 * 
 */
int main() {
    
    double sideOne, sideTwo, sideThree;
    string color2;
    char filledChar;
    
    cout << "-----Creating a Triangle-----" << endl;
    cout << "Enter in a side 1:";
    cin >> sideOne;
    cout << "Enter in a side 2:";
    cin >> sideTwo;
    cout << "Enter in a side 3:";
    cin >> sideThree;
    cout << "What color do you want to make your triangle?";
    cin >> color2;
    cout << "Is it filled? y/n:";
    cin >> filledChar;
    
    Shape *shape;
    bool filled1 = true;
    if (filledChar == 'y') {
        filled1 = true;
    } else if (filledChar == 'n') {
        filled1 = false;
  
    }
    Triangle tri(sideOne, sideTwo, sideThree, color2, filled1);
    shape = &tri;
   
    cout << " Perimeter of Triangle : " 
            <<   shape->getPerimeter()   
            << endl;
    cout << " Area of Triangle : " << shape->getArea()
            << endl;
    cout << " Color of Triangle : " << shape->getColor() << endl;
    cout << "Filled? or Nah?" << shape->getFilled() << endl;
    return 0;
}


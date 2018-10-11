/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: howar
 *
 * Created on October 10, 2018, 9:36 PM
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
    string color;
    char filledChar;
    
    cout << "-----Creating a Triangle-----" << endl;
    cout << "Enter in a side 1:" << endl;
    cin >> sideOne;
    cout << "Enter in a side 2:" << endl;
    cin >> sideTwo;
    cout << "Enter in a side 3:" << endl;
    cin >> sideThree;
    cout << "Enter in a side 3:" << endl;
    cin >> sideThree;
    cout << "What color do you want to make your triangle?" << endl;
    cin >> color;
    cout << "Is it filled? y/n" << endl;
    cin >> filledChar;
    
    Shape *shape;
    
    if (filledChar == 'y') {
        Triangle tri(sideOne, sideTwo, sideThree, color, true);
         shape = &tri;
    } else if (filledChar == 'n') {
        Triangle tri(sideOne, sideTwo, sideThree, color, false);
         shape = &tri;
    }
    
   
    cout << " Perimeter of Triangle : " 
            <<   shape->getPerimeter(sideOne, sideTwo, sideThree)   
            << endl;
    cout << " Area of Triangle : " << shape->getArea(sideOne, sideTwo, sideThree)
            << endl;

    cout << " Color of Triangle : " << shape->getColor() << endl;
    cout << "Filled? or Nah?" << shape->getFilled() << endl;
    return 0;
}


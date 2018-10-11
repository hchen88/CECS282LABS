/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle2.cpp
 * Author: howar
 * 
 * Created on October 10, 2018, 9:54 PM
 */

#include "Triangle.h"
#include <cmath>

using namespace std;
Triangle::Triangle() {
    sideOne = 1.0;
    sideTwo = 1.0;
    sideThree = 1.0;
    filled = false;
    color = "grey";
}

Triangle :: Triangle(double side1, double side2, double side3, 
        string color, bool filled ) : Shape(){
    sideOne = side1;
    sideTwo = side2;
    sideThree = side3;
}

double Triangle :: getSideOne() const{
    return sideOne;
}
double Triangle :: getSideTwo() const{
    return sideTwo;   
}
double Triangle :: getSideThree() const{
    return sideThree;
}

string Triangle :: getColor() const{
    return color;
}

bool Triangle :: getFilled() const{
    return filled;
}

double  Triangle :: getPerimeter(double sideOne, double sideTwo, double sideThree) const{
    return sideOne + sideTwo + sideThree;
    
}
double Triangle :: getArea(double sideOne, double sideTwo, double sideThree) const{
    double p = Triangle :: getPerimeter(sideOne, sideTwo, sideThree);
    
    return sqrt( p * (p - sideOne) * (p - sideTwo) * (p - sideThree)); 
    
}






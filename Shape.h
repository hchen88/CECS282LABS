/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: howar
 *
 * Created on October 10, 2018, 9:36 PM
 */

#ifndef SHAPE_H
#define SHAPE_H
#include <string> 

using namespace std;

class Shape {
public:
    Shape();
    virtual double getSideOne() const = 0;
    virtual double getSideTwo() const = 0;
    virtual double getSideThree() const = 0;
    virtual string getColor() const = 0;
    virtual bool getFilled() const = 0;
    virtual double getPerimeter(double sideOne, double sideTwo, double sideThree) const = 0;
    virtual double getArea(double sideOne, double sideTwo, double sideThree) const = 0;
};


#endif /* SHAPE_H */


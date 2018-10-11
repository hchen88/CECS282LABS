/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.h
 * Author: howar
 *
 * Created on October 10, 2018, 9:49 PM
 */
#include "Shape.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle : public Shape{
public :
    Triangle();
    Triangle(double side1, double side2, double side3, string color, bool filled);
    virtual double getSideOne() const;
    virtual double getSideTwo() const;
    virtual double getSideThree() const;
    virtual string getColor() const;
    virtual bool getFilled() const;
    virtual double getPerimeter(double sideOne, double sideTwo, double sideThree) const;
    virtual double getArea(double sideOne, double sideTwo, double sideThree) const;


private:
    double sideOne;
    double sideTwo;
    double sideThree;
    string color;
    bool filled;
    
    
};
#endif





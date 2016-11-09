//
//  EX14.03.cpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "EX14.03.hpp"


int Circle::numberOfObjects = 0;

Circle::Circle() {
    radius = 1;
    numberOfObjects++;
}

Circle::Circle(double newRadius) {
    radius = newRadius;
    numberOfObjects++;
}

double Circle::getArea() const {
    return radius * radius * 3.1459;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double newRadius) {
    radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects() {
    return numberOfObjects;
}


bool Circle::operator<(const Circle& c2) {
    if (radius < c2.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator<=(const Circle& c2) {
    if (radius <= c2.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator==(const Circle& c2) {
    if (radius == c2.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator!=(const Circle& c2) {
    if (radius != c2.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator>(const Circle& c2) {
    if (radius > c2.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator>=(const Circle& c2) {
    if (radius < c2.getRadius()) {
        return true;
    }
    return false;
}

void Sort(vector<Circle>& c) {
    int i, j, flag = 1;    // set flag to 1 to start first pass
    int temp;             // holding variable
    unsigned long cLength = c.size();
    for(i = 1; (i <= cLength) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (cLength -1); j++)
        {
            if (c[j+1] > c[j])      // ascending order simply changes to <
            {
                temp = c[j].getRadius();             // swap elements
                c[j] = c[j+1];
                c[j+1].setRadius(temp);
                flag = 1;               // indicates that a swap occurred.
            }
        }
    }
}









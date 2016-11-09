//
//  EX14.03.hpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef EX14_03_hpp
#define EX14_03_hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


class Circle {
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    bool operator<(const Circle& c2);
    bool operator<=(const Circle& c2);
    bool operator==(const Circle& c2);
    bool operator!=(const Circle& c2);
    bool operator>(const Circle& c2);
    bool operator>=(const Circle& c2);
    
    
private:
    double radius;
    static int numberOfObjects;
};


#endif /* EX14_03_hpp */

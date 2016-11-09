//
//  EX14.07.hpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef EX14_07_hpp
#define EX14_07_hpp

#include <stdio.h>
#include <string>
using namespace std;


class Complex {
private:
    double a = 0; //real part
    double b = 0; //imaginary part
    
public:
    Complex();
    Complex(double);
    Complex(double, double);
    double add(double, double);
    double subtract(double, double);
    double multiply(double, double);
    double divide(double, double);
    double abs(double, double);
    string toString(double, double);
    double getRealPart();
    double getImaginaryPart();
    
    double operator+=(const Complex& num);
    double operator-=(const Complex& num);
    double operator*=(const Complex& num);
    double operator/=(const Complex& num);
    double operator[](const Complex& num);
    double operator+(const Complex& num);
    double operator-(const Complex& num);
    double operator++(const Complex& num);
    double operator--(const Complex& num);
    double operator+(const Complex& num);
    double operator--(const Complex& num);
    double operator<<(const Complex& num);
    double operator>>(const Complex& num);
    
};


#endif /* EX14_07_hpp */

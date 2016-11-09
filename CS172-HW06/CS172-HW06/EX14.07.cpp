//
//  EX14.07.cpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "EX14.07.hpp"


Complex::Complex() {
    a = 0;
    b = 0;
}
Complex::Complex(double A) {
    a = A;
    b = 0;
}
Complex::Complex(double A, double B) {
    a = A;
    b = B;
}
double Complex::add(double c, double d) {
    return (a + c) + (b + d);
}
double Complex::subtract(double c, double d) {
    return ((a - c) + (b - d));
}
double Complex::multiply(double c, double d) {
    return ((a * c - b * d) + (b * c + a * d));
}
double divide(double, double);
double abs(double, double);
string toString(double, double);
double Complex::getRealPart() {
    return a;
}
double Complex::getImaginaryPart() {
    return b;
}

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






double operator+(const Complex& num1, const Complex& num2){
    return (num1.a + num2.getRealPart) + (num1.b + num2.getImaginaryParts);
}
double operator-(const Complex& num);
double operator*(const Complex& num);
double operator/(const Complex& num);










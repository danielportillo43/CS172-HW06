//
//  main.cpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/3/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "EX13.05.cpp"
#include "EX14.03.cpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    /*
////Ex13.01
    fstream iofile("Exercise13_1.txt", ios::in | ios::out);
    
    //create the numbers to be written to the txt file
    int numbers[100];
    int s = 0;
    for (int i = 0; i < 100; i++) {
        numbers[i] = s;
        s++;
    }
    //check if file exists
    if(iofile.fail()) {
        iofile.open("Exercise13_1.txt",ios::out);
        for (int i = 0; i < 100; i++) {//write to new file
            iofile << numbers[i] << " ";
        }
        iofile.close();
    }
    else {
        fstream appfile("Exercise13_1.txt",ios::app);
        for (int i = 0; i < 100; i++) {//append to existing file
            appfile << numbers[i] << " ";
        }
        appfile.close();
    }
    
    
    
    
////Ex13.02
    ifstream input;
    string fileName;
    
    //Open a file
    cout << "Enter File Name: ";
    cin >> fileName;
    input.open(fileName);
    
    if (input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    //count the chaaracters
    int count = 0;
    
    while (!input.eof()) //Continue if not end of file
    {
        input.get();
        count++;
    }
    
    count--; //adjust count since it was increased after the last character was read
    
    input.close();
    
    cout << "Number of characters is " << count << endl;
     
     
    
////Ex13.05
    
    string year = "01";
    char gender = 'k';
    string name = "afad";
    //take in user input
    cout << "Enter Year: ";
    cin >> year;
    fileName = "Babynameranking" + year + ".txt";
    cout << "Enter Gender (M/F): ";
    cin >> gender;
    cout << "Enter Name: ";
    cin >> name;
    
    Baby b1(gender, name);
    
    if (b1.getRank(fileName) > 0) {
        cout << name << " is ranked #" << b1.getRank(fileName) << " in the year " << year << endl;
    }
    cout << name << " is not ranked in the year " << year << endl;
    
    */
    
////Ex14.03
    vector<Circle> circles;
    Circle c1;
    circles.push_back(c1.getRadius());
    Circle c2(5);
    circles.push_back(c2.getRadius());
    Circle c3(7);
    circles.push_back(c3.getRadius());
    Circle c4(4.3);
    circles.push_back(c4.getRadius());
    Circle c5(345.1);
    circles.push_back(c5.getRadius());
    
    for (int i = 0; i < circles.size(); i++) {
        cout << circles[i].getRadius() << " ";
    }
    
    Sort(circles);
    
    for (int i = 0; i < circles.size(); i++) {
        cout << circles[i].getRadius() << " ";
    }
     
    return 0;
}

















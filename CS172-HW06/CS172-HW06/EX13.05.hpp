//
//  EX13.05.hpp
//  CS172-HW06
//
//  Created by Daniel Portillo on 11/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef EX13_05_hpp
#define EX13_05_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

class Baby {
private:
    char gender;
    string name;
    int rank;
    
public:
    
    Baby(char g, string n) {
        gender = g;
        name = n;
    }
   
        
    int getRank(string file) {
        fstream input(file.c_str(), ios::in);
        if(input.fail()) {
            cout << "File does not EXIST \n" << "ending program\n";
            return -1;
        }
        string n;
        string ignore;
        vector<string> boys;
        vector<string> girls;
        while(!input.eof()) {
            input >> ignore;
            input >> n;
            boys.push_back(n);
            input >> ignore;
            input >> n;
            girls.push_back(n);
            input >> ignore;
        }
        
        
        
        if (gender == 'M') {
            
            for (int i = 0; i < girls.size();i++) {
                if (girls[i] == name) {
                    return i + 1;
                }
                
            }
        }
        if (gender == 'M') {
            
            for (int i = 0; i < boys.size();i++) {
                if (boys[i] == name) {
                    return i + 1;
                }
                
            }
        }
        return -2;
    }
};


#endif /* EX13_05_hpp */

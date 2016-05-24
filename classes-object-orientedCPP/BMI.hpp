//
//  BMI.hpp
//  classes-object-orientedCPP
//
//  Created by Kelvin Knighton on 5/23/16.
//  Copyright © 2016 Kelvin Knighton. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_hpp
#define BMI_hpp

#include <stdio.h>

class BMI {
    
public:
    // Default Constructor
    BMI();
    
    // Overload Constructor
    BMI(string, int, double);
    
    
private:
    // member vars
    string newName;
    int newHeight;
    double newWeight;
    
};

#endif /* BMI_hpp */

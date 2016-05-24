//
//  main.cpp
//  classes-object-orientedCPP
//
//  Created by Kelvin Knighton on 5/23/16.
//  Copyright © 2016 Kelvin Knighton. All rights reserved.
//

#include <iostream>
#include <string>

#include "BMI.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string name;
    int height;
    double weight;
    
    cout << "Enter you name: ";
    cin >> name;
    cout << "enter height (in inches) : ";
    cin >> height;
    cout << "enter weight (in pounds) : ";
    cin >> weight;
    
    BMI Student_1(name, height, weight);
    
    return 0;
}

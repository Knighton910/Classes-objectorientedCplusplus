//
//  BMI.cpp
//  classes-object-orientedCPP
//
//  Created by Kelvin Knighton on 5/23/16.
//  Copyright © 2016 Kelvin Knighton. All rights reserved.
//

#include "BMI.hpp"


BMI::BMI() {
    //name of 2 colons = scope-resolution
    newHeight = 0;
    newWeight = 0.0;
};

// overload constructor
BMI::BMI(string name, int height, double weight) {
    newName = name;
    newHeight = height;
    newWeight = weight;
}
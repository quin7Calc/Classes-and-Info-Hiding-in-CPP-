//
//  confidentialType.hpp
//  Ch. 10 Program
//
//  Created by Quintan Calvert on 10/21/22.
// Header File

#ifndef confidentialType_hpp
#define confidentialType_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class confidentialType  // Each person would be declared as an instance of this class in an array
{
private:    // Personal Data stored here. Private so it is secure.
    string firstName;
    string lastName;
    string SSN;
    char married;
    double taxDue;
    
public:
    void changeInformation();   // Allows the data to be changed
    void printInformation();    // Prints the information
    confidentialType(); // Default constructor
};

#endif /* confidentialType_hpp */

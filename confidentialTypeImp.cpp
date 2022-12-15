//
//  confidentialTypeImp.cpp
//  Ch. 10 Program
//
//  Created by Quintan Calvert on 10/21/22.
// Implementation File

#include "confidentialType.hpp"
#include <iostream>
#include <string>

using namespace std;

void confidentialType::changeInformation() // Allows the data to be changed
{
    cout << "Enter the New Data for this person. Old Data will be erased!" << endl << endl;
    cout << "New First Name: ";     // Prompts, accepts, and changes the First Name
    cin >> firstName;
    
    cout << "New Last Name: ";
    cin >> lastName;     // Prompts, accepts, and changes the Last Name
    
    cout << "New Social Security Number: ";
    cin >> SSN;     // Prompts, accepts, and changes the Social Security Number
    
    cout << "New Marital Status:  (Y/N): ";
    cin >> married;     // Prompts, accepts, and changes the Marital Status
    
    cout << "Enter Tax Due by this person: ";
    cin >> taxDue;     // Prompts, accepts, and changes the Taxes due by this person
    
    cout << endl;
    
    return;
};

void confidentialType::printInformation() // Prints the information of a selected ID / Person / Array Component
{
    cout << "First name is: " << firstName << endl;
    cout << "Last name is: " << lastName << endl;
    cout << "Social Security Number is: " << SSN << endl;
    cout << "Marital Status: " << married << endl;
    cout << "Tax Due: " << taxDue << endl;
    cout << endl;
    
    return;
};

confidentialType::confidentialType() // Default constructor, Initializes Values.
{
    firstName = "*";
    lastName = "*";
    SSN = "*";
    married = false;
    taxDue = 0.0;
};


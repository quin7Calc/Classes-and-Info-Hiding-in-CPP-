//
//  main.cpp
//  Ch. 10 Program
//
//  Created by Quintan Calvert on 10/20/22.
// Main File

#include <iostream> //Header Files and other cpp file prerequisites
#include <string>
#include "confidentialType.hpp"

using namespace std;

int main() {    //Main Routine is defined on main.cpp

    int choice ;        //To store the user's choice in action
    int position = 0;   // To store the position in the array.
    string guess = "";  //The user input from the password
    int attempts = 1;   //Number of attempts on the password
    
    confidentialType people[25];    //This is an array of classes. Each component of the array represents a single person.
    
    cout << "Welcome to Information Database. You will need a staff PassCode";
    cout << endl;
    
    // Prompt Here for Password, if attempts failed greater than three or type "exit", exit.
    string password = "6783249";    //Password defined here, for more security, password could be created and defined
    //In a different class. For these purposes, it is left in main.
    
    cout << "Enter the Staff Passcode. You have three attempts: " << endl << endl;  // Prompt for passcode
    
    while (guess != password)       /* This while loop controls the password entry, and decides if the user will proceed onwards in the program. Loop is exited once password is entered correctly */
    {
        cout << "Attempt Number " << attempts << endl;  //Prompt
        cout << "Enter Passcode:";
        cin >> guess;   //Input of passcode
        attempts++;     //Increment attemtpts.
        
        if (attempts > 3)   //If attempts is greater than three exits program, user is 'locked out' so to speak.
            return 7;
    }
    cout << endl;
  
    cout << "Here are your options: ";  // Displays the Main Menu Here
    cout << endl << endl;
    cout << "1. View Data" << endl;     // Three choices. The user will enter the number of the one they want.
    cout << "2. Modify Data" << endl;
    cout << "3. Quit Program" << endl << endl;
    
    cout << "What would you like to do? : ";
    cin >> choice;      //User decision and input
    
    while ( choice != 3)    // If choice is three, we quit the program, otherwise, we stay in loop.
    {
    
    position = (position - 1);  // Augments the position to make the first array component one rather than zero.
    
        cout << "Enter the person's Number (1- 25): ";  //Each person has an identifier in the database. Thier data is linked to //it.
        cin >> position;        // Get the database position of the person's data from user
        cout << endl;
        
        if (cin.fail())     //Test for input failure. If input fail occurs, infinite loop will occur. NOT GOOD.
        {
            cin.clear();
            cout << "Input Failure! Terminating Program." << endl << endl;
            return 3;
        }
        
    if (choice == 1)                              // This is the decison making part of Main. It takes user input and evaluates it
        people[position].printInformation();  // The user's choice is used to direct the program to the correct function
    else if (choice == 2)
        people[position].changeInformation();   //This function either prints the user data of a database member or changes it.
    else if (choice == 3)
        return 0;
    else
    {
        cout << "Invalid Input. Restart Program";
        return -1;
    }

        
        cout << "Here are your options: ";  // Repeat of menu. This is part of the priming read method, read once, enter loop,
        cout << endl << endl;                // Then read at the end of each loop cycle. Program loops until "3" to Quit.
        cout << "1. View Data" << endl;
        cout << "2. Modify Data" << endl;
        cout << "3. Quit Program" << endl << endl;
        
        cout << "What would you like to do? : ";
        cin >> choice;
        
        if (cin.fail())     // Input fail check (again)
        {
            cin.clear();
            cout << "Input Failure! Terminating Program" << endl << endl;
            return 3;
        }
    }
    
    
    return 0;
}


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

#include "std_lib_facilities.h"

int main()
    {
        string operation;
        double num1;
        double num2;
        
        cout << "Enter an operation followed by two numbers and use spaces to separate each value\n";
        cin >> operation;
        cin >> num1;
        cin >> num2;

        if(operation =="+")
        {
            cout << num1+num2 << "\n";
        }
        else if(operation =="-")
        {
            cout << num1-num2 << "\n";
        }
        else if(operation =="*")
        {
            cout << num1*num2 << "\n";
        }
        else if(operation =="/")
        {
            cout << num1/num2 << "\n";
        }

        return 0;
    }

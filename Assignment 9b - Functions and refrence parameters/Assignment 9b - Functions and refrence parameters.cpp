// Assignment 9b - Functions and refrence parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


bool decode(string input, int& code1, int& code2, int& code3);


int main()
{
    int code1;
    int code2;
    int code3;

    string input;
    cout << "Enter a sequence to decode." << endl;

    cin >> input;
    cout << endl;
 

    if (decode(input, code1, code2, code3))
    {
        cout << "Your sequence decoded is: " << endl;

        cout << "Number 1: " << code1 << endl;
        cout << "Number 2: " << code2 << endl;
        cout << "Number 3: " << code3 << endl;
    }

    else
    {
        cout << "The sequence is not at the required length." << endl;
    }

 
    return 0;
}

bool decode(string input, int& code1, int& code2, int& code3)
{
    if (input.length() != 9)
    {
        return false;
    }

    code1 = 0;
    code2 = 0;
    code3 = 0;

    for (int i = 0; i < 9; i++)
    {
        if (i < 3)
        {
            code1 = code1 + static_cast<int>(input.at(i));
        }
        else if (i < 6)
        {
            code2 = code2 + static_cast<int>(input.at(i));
        }
        else
        {
            code3 = code3 + static_cast<int>(input.at(i));
        }
    }
        return true;
}
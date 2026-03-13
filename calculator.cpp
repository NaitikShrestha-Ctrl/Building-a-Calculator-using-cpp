#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num1, num2; //here i create enter data type also here i used double cause user can enter multiple decimal nuumber
    char op; //here also i craeted data type fto ask user sign (+,-,*,/)

    //asking user toi enter input 
    cout << "Enter First Number: ";
    cin >> num1; 

    //asking user to enter input 
    cout << "Enter Arithmetic Operators: ";
    cin >> op;

    //asking user to enter input 
    cout << "Enter Second Number: ";
    cin >> num2;

    double result; //here for result i created another data type

    if (op == '+')
    {
        result = num1 + num2; // here basicly i coded function to add num 1 + num 2 
        cout << "Answer  of given calculation is: " << result; //to print output
    }
    
    else if (op == '-')
    {
        result = num1 - num2; // here basicly i coded function to subtracted num 1 - num 2 
        cout << "Answer  of given calculation is: " << result; //to print output
    } 
    
    else if (op == '*')
    {
        result = num1 * num2; // here basicly i coded function to multiplying num 1 * num 2 
        cout << "Answer  of given calculation is: " << result; //to print output
    }
    
     else if (op == '/')
    {
        result = num1 / num2; // here basicly i coded function to divide num 1 / num 2 
        cout << "Answer  of given calculation is: " << result; //to print output
    }

    else
    {
        cout << "Invailad Operator"; // here if none condition is correct it will print this 
    }

    return 0;
}

// I build calculator using switch

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1, num2;
    char op;

    // here asking user input 
    cout << "Enter first number: "; 
    cin >> num1;

    cout << "Enter  Operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) // using switch 
    {
        case '+':
            cout << "The answer of given solution is: " << num1 + num2 ; 
        break;
    
        case '-':
            cout << "The answer of given solution is: " << num1 - num2 ;
        break;

        case '*':
            cout << "The answer of given solution is: " << num1 * num2 ;
        break;

        case '/':
            cout << "The answer of given solution is: " << num1 / num2 ;
        break;

    default:
        cout <<"You have enter wrong Operator";
        break;
    }

    return 0;
}
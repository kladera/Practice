#include <iostream>
using namespace std;


int main()
{
                                                                        // if statement is used when you want to execute part of your code conditonally, 
                                                                        // else block will be executed if the if statement is not valid                                                                    
    // ACTIVITY                                                         
    // User enters integer number
    // Program write out if that number is even or odd

    cout << 4 % 4 << endl;                                                      // % is a modulus operator, which will get the remainder value between the 2 numbers


    int number;
    cout << ("Please enter a whole number: ") << endl;
    cin >> number;

    if (number % 2 == 0)                                                   // == used to check equality of 2 sides, while = is used to assign value
    {                                                                      // if the condition () is true, the block of code below will be executed
        cout << "You have entered an even number." << endl;                                                               // {} is used to indicate a block of code 
                                                                          
    }
                                                                           // if the condition is false, execute else statement
    else
    {
        cout << "You have entered an odd number." << endl;
    }

    cout << "Thank you. Bye!";


    system("pause > 0");
}


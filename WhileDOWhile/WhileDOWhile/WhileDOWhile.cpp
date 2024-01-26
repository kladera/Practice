#include <iostream>
using namespace std;



void main()
{
    
    int usersPin = 1234, pin, errorCounter = 0;           // usersPin = correct pin, pin = variable for user input, errorCounter = # of error input

    do 
    {
        cout << "PIN: ";
        cin >> pin;                             // pin variable that user will input

        if (pin != usersPin)                    // if the user's input pin is NOT equal to usersPin variable 1234, then increment 1 to the value of errorCounter every iteration
            errorCounter++;

    } while (errorCounter <3 && pin != usersPin);           // while the errorCounter is less than 3 and pin is still NOT equal to usersPin 1234, execute the body of the loop again 
    
    if (errorCounter < 3)                                   // if errorCounter is less than 3, thay means the user has inputed the correct pin, cout Loading...
        cout << "Loading...";
    else                                                   // else the user has exceeded 3 attempts meaning errorCounter = or more than 3, cout Blocked...
        cout << "Blocked...";


    system("Pause> 0");
}

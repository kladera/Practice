#include <iostream>
using namespace std;


int main()
{
	char choice;												// the variable choice is a char data type
	cout << "Our menu describes 3 different conceptes and can tell you if your number is even or odd." << endl;
	cout << "A: What is the structure of the for loop?" << endl;
	cout << "B: Sum of two numbers." << endl;
	cout << "C: Tells you if the number is odd and even." << endl;
	cout << "D: Quit the program." << endl;
	cout << "Which one would you like to try?" << endl;
	cin >> choice;												// cin, used to get input from the user

																// We're gonna have a case for each of the choices (a, b, c, d)
	switch (choice)												// switch statement with variable choice (which is the input of the user) as its expression
	{															// curly braces {} begins and ends the switch statement
	case 'a':													// the lowercase 'a' and uppercase 'A' is a fall through program for the user inout. Meaning the program will accept the answer whether the input was in either case.
	case 'A': cout << "Following is a for-loop structure\n for (intialize, expression, counter)\n";
		break;													// break terminates case a
	

	case 'b':													// since the variable is a char, single quotes '' must be used for the char variables
	case 'B':
	{
		double a, b, c;
		cout << "Please enter two separate numbers: \n";
		cin >> a >> b;
		c = a + b;
		cout << "The Sum is " << c << endl;
	}
		break;													// break terminates case b


	case 'c':
	case 'C':
	{
		int input;												// the input variable is an integer data type
		cout << "Please enter an integer and I will tell you if it's an odd or even number." << endl;
		cin >> input;											// user input using cin

		if (!input)												// input validation, ensures the input must be an integer
			cout << "Invalid. Please input an integer number." << endl;
		else if (input % 2 == 0)								// use mod operator to get the remainder of an operand, == means is equal to
			cout << "Your number is an even number.";
		else
			cout << "Your number is an odd number.";
	}
		break;													// break terminates case c

	case 'd':
	case 'D':
		cout << "You are now exiting the program." << endl;
		return 0;												// return 0 within case d only
		break;													// break terminates case d				

	default: cout << "That is an invalid choice. \n";			// incase the user inputs something else other than the choices in the menu (a, b, c, d)
	}
	return 0;     



	system("pause >0");

}


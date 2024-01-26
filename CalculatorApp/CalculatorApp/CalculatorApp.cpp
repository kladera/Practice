#include <iostream>
using namespace std;


int main()
{
	float num1, num2;							// declare the variables as float since user input may be in decimal value
	char operation;								// since operation signs are characters
												// the suggestion box that pops up is called intellisense
	cout << "**Calculator**" << endl;
	cin >> num1 >> operation >> num2;

												// switch statements execute a block of code depending on a certain condition or value of a certain variable.
												// Switch statements are used if the variable can potentially hold a lot of different values
												// for example the variable operation can hold 6 different values (+, - , *, /, % invalid)
												// type switch, then TAB will automatically add some default codes
	switch (operation)
	{
	case '-': cout << num1 << operation << num2 << "=" << num1 - num2;		// this means, whenever the - operation is chosen, the compiler must execute the code after the case -: (semicolon)
		break;																// break means this is where case - ends.
	
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2;
		break;
	
	case '*': cout << num1 << operation << num2 << "=" << num1 * num2;
		break;
	
	case '/': cout << num1 << operation << num2 << "=" << num1 / num2;
		break;

	case '%':																// casting operators is used to convert 1 data type to another. since % cannot work on a float, it has to be converted into an integer first
		bool isNum1Int, isNum2Int;
														// CASTING OPERATOR/covertion of data type SYNTAX. (type) expression; EX. (int)num1 == num1
		isNum1Int = ((int)num1 == num1);				// 5==5.0 **(int)num1 is checking if it is equal to num1 which is 5.0 floating point.this will be TRUE.
														// only the whole part of the number will be taken not the decimal. ex. 5.7, int will only be 5 
														// the answer from the expression will then be assigned to the variable isNum1Int
		isNum2Int = ((int)num2 == num2);				// do the same for isNum2Int
		
		if (isNum1Int && isNum2Int)															// if isNum1Int && isNum2Int = TRUE condition
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;				// my variable num1 converted to int (int)num1, %Modulate that to my num2 that is also converted to int (int)num2
		else
			cout << "Not valid!";									// in a situation when any of the variables isNum1Int && isNum2Int are not integers, write Not valid!
		break;
												
	default: cout << "Not valid operation!" << endl;				// in case the user enters a sign that does not correspond to any of the signs/cases, the default code will execute
	}

	system("Pause >0");

}


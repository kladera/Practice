#include <iostream>
using namespace std;


int main()
{
											// we can find out a characters numeric math using a casting operator
	cout << (int)'a' << endl;				// this (int)'a' and int('a') is a casting operator, it forces one datatype to convert into another 
	cout << int('a') << endl;				// what is the number of 'a' in the ascii table. this will show 97
	cout << int('A') << endl;				// a capital A in the ascii table is 65. this is so the computer can distinguish the difference of upper and lowercase.
											// a char has a size of 1byte = 8 bits, with 1bit assigned to the sign, the char values are alloted with 7bits
											// char value is 2 to the power of 7 = 128 (this is enought for all english characters, lower and uppercase including some special characters.

											// ASCII uses 7 bits for char. ASCII holds a character's numeric match in a table.
											// There is also Extended ASCII, UTF16, UTF8

											
											// How to convert a number to it's equivalent character in the ASCII table
	cout << char(65) << endl;				// This will show a capital A

	
											// To cypher a 5 letter word
											// If you want to convert a variable using a casting operator, there is no need to use single quotes, just put the variable inside like int(c1)


	char c1, c2, c3, c4, c5;				// you can make multiple variables in 1 line only if they are the same data type (char)
	cout << "Enter 5 letter: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;																							// you can also bind the varibles in 1 line in cin using the cin operators >>
	cout << "ACSII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;		// you can also show multiple varibles in 1 line using the cout operators <<
																																// this did not consider the input of space key or enter from the user
																																// use cin.get to capture enter or space in c++

	char c6, c7, c8, c9, c0;
	cout << "Enter 5 numbers from 0 to 128: ";																					//this block of code is wrong because the user input for space and enter was not adjusted
	cin >> c6 >> c7 >> c8 >> c9 >> c0;
	cout << "ACSII message: " << char(c6) << " " << char(c7) << " " << char(c8) << " " << char(c9) << " " << char(c0);			
	



	system("pause>0");

}


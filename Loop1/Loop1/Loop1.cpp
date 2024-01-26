#include <iostream>
using namespace std;


int main()
{										// FOR LOOP - used best if # of iteration is known. the Conditon will determine if the for loop will be executed at all or multiple times.
										// It is divided into 3 parts. 1) Variable declaration int i = 0; 2) Condition i < 5; 3) Code that will be called before the next iteration of the for loop i++.
										// int i = 0; Meaning this is the first thing don, a variabl ewith value of 0 is created. After that it will check if the condition is TRUE.
									    // i < 5: Meaning it will check if i has value that is less than 5. if TRUE, it will then jump into the body of our for loop and execute. 
	// FOR LOOP							// Once we hit the closing curly bracket at the end of the body of the for loop, it will then go back to whatever code is written in part 3
										// which is increment +1 value to variable i every single iteration of the for loop
										// this will repeat until the condition becomes FALSE, meaning if the value of variable i becomes 5 (iterated 5th time)
	for (int i = 0; i < 5; i++)
	{									// body of the loop is the code that will be executed multiple times, {} starts and ends the body of the code
		cout << "Hello World!" << endl;
	}

	cout << "==============================================================================================" << endl;

										// WHILE LOOP  - used best if # of iteration is unknown.
										// it ONLY has a condition.
	// WHILE LOOP						// The variable is set before the WHILE loop and Part3 w/c is the code to be executed every iteration is in the body

	int i = 0;
	while (i < 5)
	{
		cout << "Hello World!" << endl;
		i++;
	}


	cout << "==============================================================================================" << endl;



	//DO WHILE LOOP						// DO WHILE LOOP - exit controlled loop
										// main difference between WHILE loop is that the body will be executed AT LEAST once no matter if the condition is true or false.
	bool condition = false;
	do
	{
		cout << "Hello World!" << endl;		// body 
		i++;

	} while (condition);				// condition goes after the body
										// when run, the body executed ONCE even when the set condition was FALSE.




	system("Pause > 0 "); 
}

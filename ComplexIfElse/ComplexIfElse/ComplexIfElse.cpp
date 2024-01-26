#include <iostream>
using namespace std;


// ACTIVITY
// Users should enter the side lenghts of a triangle (a, b, c)
// The program should write out if that triangle is equilateral (all sides are equal), isosceles (2 sides are equal)  or scalene (no sides are equal)


int main()
{

	float a, b, c;

	cout << ("Please enter a, b, c: ") << endl;
	cin >> a >> b >> c;																// using >> you can assign the user input for a on the a variable, user inut for b to the b variable and user input for c to the c variable. 


	if (a== b && b ==c)																// 2 ampersands && called AND operator is used to compare values of left or right 
	{																				// if the condition is true, then it's an Equilateral triangle
		cout << ("The triangle is an Equilateral.");								// {} brackets could be deleted if you're only executing 1 command inside the statement
	}
																							

	else
	{
		if (a!=b && a!=c && b!=c)													// != is a NOT EQUAL operator.  if this is true, triangle is Scalene (all sides not equal)
		{																			// {} brackets could be deleted if you're only executing 1 command inside the statement
		cout << ("The triangle is a Scalene.");
		}

		else                                                                        // if the condition is false, the traingle is an Isosceles triangle
		{												
		cout << ("The triangle is an Isosceles.");
		}
	}

	system("Pause > 0");
}


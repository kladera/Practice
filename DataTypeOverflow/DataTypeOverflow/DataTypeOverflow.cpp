#include <iostream>
using namespace std;


int main()
{

    int intMax = INT_MAX;                    // int is the data type, ineMax is the variable, INT_MAX is a keyword for maximum value of int
    cout << intMax << endl;                  // max will show 2147483647
    cout << intMax + 1 << endl;              // since it exceeded the maximum value, it will overflow and show the minimum value -2147483648 (just like a clock, after 12 will go back to 1)
        


    system("pause>0");
}


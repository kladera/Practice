#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1995;                             // Integers can hold + whole numbers, 0 and - whole numbers.
    char gender = 'f';                                  // when assigning value to a character variable, use single quotes ''
    bool isOlderThan18 = true;                          // true or false
    float averageGrade = 4.5;                           // decimal values, can store 4bytes of data
    double balance = 58746976329;                       // decimal values, can store 8bytes of data


    cout << "Size of int is " << sizeof(int) << " bytes\n";             // 4 bytes = 32 bits. 1st bit is assigned for the + or - sign. rest 31bits are assigned for the value.
    cout << "Size of char is " << sizeof(char) << " bytes\n";           // 1byte
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";           // 1byte
    cout << "Size of float is " << sizeof(float) << " bytes\n";         // 4 bytes = 32 bits. 1st bit is assigned for the + or - sign. rest 31bits are assigned for the value.
    cout << "Size of double is " << sizeof(double) << " bytes\n";       // 8bytes

    // -1, -2, -3 .... - 2147483648
    cout << "Int min value is " << INT_MIN << endl;          // INT_MIN is a keyword, 2 to the power of 31 (since remaining bits) = - 2147483648
    // 0, 1, 2, 3 ... 2147483647
    cout << "Int max value is " << INT_MAX << endl;          // INT_MAX is a keyword, 2 to the power of 31 (since remaining bits) = 2147483647 (-1 since number 0 is included in the positive range)


    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";        // use unsigned to allot all 32bits of int to the value, all positive
    cout << "Max size of unsigned int is " << UINT_MAX << endl;                     // maximum value of int has now changed and doubled when unsigned







    system("pause>0");

}

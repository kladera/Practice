#include <iostream>
using namespace std;

int main()
{
    //float annualSalary = 50000.99;                                  // hard coded a variable annualSalary 
    float annualSalary;                                               // a container for variable annualSarary that has no defined value as I want the user to input it.     
    cout << "Please enter your annual salary: $ ";
    cin >> annualSalary;                                              // cin means the user will console input the data. >> means whatever was inout will be redirected as value of annualSalary variable
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is $ " << monthlySalary << endl;     // use "" for strings, for values just put the variable name, \n inside the srting or << endl before the semicollon. 
    cout << "In 10 years you will earn $ " << annualSalary * 10;      // say you want to calculate how much the user is going to earn in 10 years


                                                                      // naming variables - make it meaningful, no special characters except _, can't begin with numbers, can't contain blackspace 
    char character = 'a';                                             // char is the data type used for character variables in c++, if you wanna assign a value to a character variable in c++ use single quotes ''
   


    system("pause>0");
}


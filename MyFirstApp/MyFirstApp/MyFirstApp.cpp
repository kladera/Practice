#include <iostream>

using namespace std;                                           // references the std namespace on a global level, so we don't have to put it everytime

int main()
{
    std::cout << "Hello World!\n";                            // cout will allow output to the console . \n means new line 
    std::cout << "My name is Kristiana." << std::endl;        // <<std::endl; also means new line
    cout << "Today is Friday\n";                                // deleted std:: since declared namespace std on a global level
    cout << "Have a Nice Day";


    system("pause>0");                                        // this is to delete junk texts in the output console
}

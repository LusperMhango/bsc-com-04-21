#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocate an integer

    int *dynamicallyAllocatedInteger = new int;

    // Dynamically allocate a string
    string *dynamicallyAllocatedString = new string;

    // Prompt user for input
    cout << "Enter a value for the dynamically allocated integer: ";
    cin >> *dynamicallyAllocatedInteger;

    cout << "Enter a value for the dynamically allocated string: ";
    cin >> *dynamicallyAllocatedString;

    // Output the values
    cout << "The value of the dynamically allocated integer is: " << *dynamicallyAllocatedInteger << endl;
    cout << "The value of the dynamically allocated string is: " << *dynamicallyAllocatedString << endl;

    // Free the dynamically allocated memory to avoid memory leaks
    delete dynamicallyAllocatedInteger;
    delete dynamicallyAllocatedString;

    return 0;
}
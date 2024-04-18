#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare an array and initialize it with string elements
    string array[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Initialize a for loop to iterate through each element of the array
    for (int i = 0; i < 8; i++) {
        // Check if the first character of the string starts with the letter "B"
        if (array[i][0] == 'B') {
            // If it does, output the string to the console
            cout << array[i] << endl;
        }
    }

    return 0;
}
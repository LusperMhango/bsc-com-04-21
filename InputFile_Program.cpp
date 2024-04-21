#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int countWords(string str) {
    int count = 0;
    string word = "";
    for (char c : str) {
        if (c == ' ' || c == '\n') {
            if (!word.empty()) {
                count++;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        count++;
    }
    return count;
}

string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

string capitalizeSecondLetter(string str) {
    string capitalized = " ";
    bool capitalizeNext = false;
    for (char c : str) {
        if (capitalizeNext) {
            capitalized += toupper(c);
            capitalizeNext = false;
        } else if (c == ' ') {
            capitalizeNext = true;
        } else {
            capitalized += c;
        }
    }
    return capitalized;
}

int main() {
    // Create the module_statement.txt file
    ofstream file("module_statement.txt");
    if (file.is_open()) {
        file << "This is the Advanced Computer Programming Module";
        file.close();
    }

    // Open the module_statement.txt file and assign its contents to fileData
    ifstream fileData("module_statement.txt");
    string sentence((istreambuf_iterator<char>(fileData)), istreambuf_iterator<char>());

    // Calculate and output the number of vowels in the statement
    int vowelCount = countVowels(sentence);
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculate and output the number of words in the statement
    int wordCount = countWords(sentence);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the statement and output it
    string reversed = reverseString(sentence);
    cout << "Reversed statement: " << reversed << endl;

    // Capitalize the second letter of each word in the statement and output it
    string capitalized = capitalizeSecondLetter(sentence);
    cout << "Capitalized second letter of each word: " << capitalized << endl;

    return 0;
}
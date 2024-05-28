// given alphabet in the word should be removed

#include <iostream>
#include <string>

using namespace std;

string removeGivenChar( string str, char ch) {
    string result;

    // Iterate over each character in the input string using a normal for loop
    for (int i = 0; i < str.length(); i++) {
        // If the current character is not the character to be removed, add it to the result
        if (str[i] != ch) {
            result += str[i];
        }
    }

    // If the result is empty, return "empty"
    if (result.empty()) {
        return "empty";
    }

    // Otherwise, return the result
    return result;
}

int main() {
    // Variables to hold user input
    string str;
    char ch;

    // Take input from the user
    cout << "Enter the string: ";
    cin >> str;

    cout << "Enter the character to remove: ";
    cin >> ch;

    // Call the function and print the result
    cout << "Result: " << removeGivenChar(str, ch) << endl;

    return 0;
}

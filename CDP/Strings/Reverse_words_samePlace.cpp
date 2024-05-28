// words ko same place pe ulta kr dega...not whole sentence.  ==>   i love you = i evol uoy

#include <bits/stdc++.h>
using namespace std;

string reverseWords(const string& str) {
    string result;
    int length = str.length();
    int start = 0;

    // Iterate through the string
    for (int i = 0; i <= length; ++i) {
        // Check if we reached the end of a word
        if (i == length || isspace(str[i]) || ispunct(str[i])) {
            // Reverse the current word
            string word = str.substr(start, i - start);
            reverse(word.begin(), word.end());
            result += word;
            
            // Add the space or punctuation mark if it exists
            if (i < length) {
                result += str[i];
            }

            // Update the start of the next word
            start = i + 1;
        }
    }

    return result;
}

int main() {
    // Variables to hold user input
    string str;

    // Take input from the user
    cout << "Enter the string: ";
    getline(cin, str);

    // Call the function and print the result
    cout << "Result: " << reverseWords(str) << endl;

    return 0;
}

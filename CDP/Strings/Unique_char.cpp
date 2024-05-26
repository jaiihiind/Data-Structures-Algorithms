// eak bhi characters repeat nhi hone chahiye

#include <iostream>
using namespace std;
#include <string>
#include<bits/stdc++.h>

string uniqueCharacters(string str) {
	int n = str.length();
    string result;
    
	for (int i = 0; i < n; i++) {
	char currentChar = str[i];
	if (result.find(currentChar) == string::npos) {       // In result find-current Char
	result += currentChar;                               // string::npos -> string(value) not found 
	}
 } 
 	return result;
}


int main() {
	string str;
	cout<<"Enter string : ";
	cin>>str;
	cout << uniqueCharacters(str) << "\n";
	return 0;
}








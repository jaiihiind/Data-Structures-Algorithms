//  I Love India -> aidnI evoL I

#include <iostream>
#include <string>
using namespace std;

string reverse(string n){
    int len = n.length();
    string rev;

    for(int i = len - 1 ; i >= 0 ; i--){
        rev = rev +  n[i];
    }
    return rev;
}

int main() {
    string n;
    cout<<"Enter a string: ";
    getline(cin, n);       // Modified to accept spaces
    cout<<reverse(n);

    return 0;
}

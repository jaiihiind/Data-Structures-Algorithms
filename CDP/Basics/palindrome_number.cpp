#include <bits/stdc++.h>
using namespace std;

int palindrome(int n ){
    int orig = n;
    int num =0;
    while(n != 0 ){
        num = num * 10 + n % 10;   // main formula  (Reverse krke)
        n = n / 10;
    }
    return (orig == num ) ?  1: 0 ;
}

int main() {
    int n ;
    cout<<"enter no.";
    cin>>n;

    cout<<"Result is : "<<palindrome(n);

return 0;
}
#include <bits/stdc++.h>
using namespace std;

int rev_no(int n){
    int rev=0; 
    
    while(n>0){
        int last = n % 10 ;     // last no extract krke
        rev = rev * 10 + last ; 
        n = n / 10 ;    // updating n (last wala hatake)
    }
    return rev;

    }

int main() {
int n;
cout<<"enter no :  ";
cin>>n;
cout<<rev_no(n);
return 0;
}
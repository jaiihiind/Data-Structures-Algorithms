//armstrong no. -> 123 = 1^3 + 2^3 + 3^3

#include <bits/stdc++.h>
using namespace std;


 // ye funct. count pata krne ke liye

int count(int n){
    int cnt=0;   // always initia. to zero.
    while( n != 0){
        n = n / 10;         // eak eak last se hatta rahega aur count badta rahega
        cnt++;
    }
    return cnt; 
}

string arm(int n ){
    int sum =0;  //loop ke upar declare kro humesha
    int orig = n; 
    int cnt = count(n);     // isme count store kiya hai

    while(n != 0){
        int digit = n % 10 ;         // last no ko lega
        sum = sum + pow(digit , cnt);
        n = n/10;                    //last digit hatayega
    }
    if (sum == orig ) {
        return "yes armstrong no hai ";
    }
    else{
        return "atmstrong no nhi hai";
    }
}
    


int main() {
int n ;
cout<<"No. dalo sir : ";
cin>>n;
cout<<"Result is : "<<arm(n);

return 0;
}
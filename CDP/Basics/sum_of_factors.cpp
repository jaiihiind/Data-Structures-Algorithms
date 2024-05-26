#include <bits/stdc++.h>
using namespace std;

int sum_factors(int n){
    int sum = 0 ; 

    for( int i = 1; i <= n ; i++){  // i < = n (equal to condition very imp.)
        if( n % i == 0){            // n & i place - dont change
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
int n ; 
cout<<"Enter a no: ";
cin>>n;
cout<<sum_factors(n);

return 0;
}
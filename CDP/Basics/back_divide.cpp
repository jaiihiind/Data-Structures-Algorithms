// 2 inputs -->(back-printing no., 9, 98, 987)  -->how much to add that it divides perfectly

#include <bits/stdc++.h>
using namespace std;

int func(int a ){
    int backNo =0 ;  // must be initialised with zero

    for( int i =9; i >= ( 9 - a ) + 1 ; i--){       
        backNo = 10 * backNo + i ;    // for storing reverse no.s
    }
    return backNo;
}


int main() {
int a ;
cout<<"Enter 1st number:";
cin>>a;
// cout<<"Enter 2nd number:";
// cin>>b;
cout<<func(a);


return 0;
}
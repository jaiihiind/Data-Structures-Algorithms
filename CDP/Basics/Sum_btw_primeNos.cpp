#include <bits/stdc++.h>
using namespace std;

bool prime( int n ){
    if(n<2){
        return 0;
    }

    for(int i =2; i< n; i++ ){     // ( i*i <= n )
        if(n%i ==0){
            return 0;
        }
    }
    return 1;
}


int main() {
int a, b, sum=0;
cout<<"enter 1st no: ";
cin>>a;
cout<<"enter 2nd no: ";
cin>>b;
for(a; a<=b; a++){
    if(prime(a)){
        sum=sum + a;
    }
}
cout<<"Sum between no. is:"<<sum;


return 0;
}


// int a, b;
// cout<<"enter 1st no: ";
// cin>>a;
// cout<<"enter 2nd no: ";
// cin>>b;
// for(a; a<=b; a++){
//     if(prime(a)){
//         cout<<a<<" ";
//     }
// }
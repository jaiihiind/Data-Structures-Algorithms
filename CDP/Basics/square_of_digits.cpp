// sare digits ka square krke usko add krega


#include <bits/stdc++.h>
using namespace std;

int square(int n){
    int sum=0,l;
    while(n>0){
        l=n%10;
        sum=sum+(l*l);
        n=n/10;
    }

    return sum;
}
int main() {
int n;
cout<<"no dalo : ";
cin>>n;
cout<<"sum of the squares is : "<<square(n);

return 0;
}
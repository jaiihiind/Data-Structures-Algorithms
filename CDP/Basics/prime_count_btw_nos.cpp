// do numbers ke bich me kitne prime no.s hai
#include <bits/stdc++.h>
using namespace std;

bool prime(int n ){  

    if (n<2){
        return 0;
    }
    for (int i=2; i*i<=n; i++){     // i < n (can also be done)
        if(n % i == 0){
            return 0;
        }
        
    }
      return 1;  // pura no. true hai ki nhi , comes out after checking all elements, not checking for a single elem. in loop
}

int main() {
int a,b,cnt=0;
cout<<"Enter 1st no : ";
cin>>a;
cout<<"Enter 2nd no : ";
cin>>b;

for(a; a<=b; a++){
    if(prime(a)){
        cnt++;
    }
}

cout<<cnt;

return 0;
}
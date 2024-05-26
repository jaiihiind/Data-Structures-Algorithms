// nth prime no .. nth no. (rank) pe kon sa prime no . hai that should be printed

#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {       
	    if (n < 2) {            // prime no is greater than 2
			return false;
	    }

	    for (int i = 2; i * i <= n; ++i) {
	        if (n % i == 0) {     // prime no is not divisible by itself
	        	return false;
	        }
	    }
	    return true;
}


int prime(int n){
    if(n == 1 ){       // pehla prime no. to fix hai,1st rank pe 2 ayega
        return 2;
    }

    int cnt = 1; 
    int num = 3;        //(original no.)

    while(cnt < n){
        if(isPrime(num) == true){
            cnt++;
        }
        if(cnt < n ){
            num = num + 2;   // All prime no. are ODD***
        }
    }
    return num;
}


int main() {
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cout<<prime(n);
return 0;
}
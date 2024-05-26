// Jitna diya hai utne fibonacci no prints krega....

#include <bits/stdc++.h> 
using namespace std; 

int fib(int n) {                // ye only nth no ka hi fib no. print krega
	if (n <= 1) 
		return n;     
	return fib(n - 1) + fib(n - 2); 
} 

int main() 
{ 
	int n;
    cout<<"enter no: ";
    cin>>n; 
    for(int i =0; i< n; i++){
	    cout << fib(i)<<" ";      // eak eak no ka print krate rehna hai
    }
	return 0; 
} 
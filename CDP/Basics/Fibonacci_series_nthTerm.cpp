// Sum of Fibonacci Series using Recursion 
// prints the fibonacci no. in the given rank...starts from 1 1 2 3 5 ...

#include <bits/stdc++.h> 
using namespace std; 

int fib(int n) 
{ 
	if (n <= 1) 
		return n; 
	return fib(n - 1) + fib(n - 2); 
} 

int main() 
{ 
	int n;
    cout<<"enter no: ";
    cin>>n; 
	cout << fib(n); 
	return 0; 
} 

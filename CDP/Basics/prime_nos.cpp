// Printing the prime no. upto a given range

#include <bits/stdc++.h>
using namespace std;

void prime( int n ){                    // kuch return nhi karega ... print krega bass

    if (n <= 1) {
        cout << "No prime numbers in this range." << endl;
        return;
    }

    
    vector <bool> isPrime(n,false);    // sare unmarked shuru me

    for(int i =2; i <= n ; i++){
        if(isPrime[i] == false){            //unmarked hai to uske multiples to jake mark kr denge
        for(int j= i*i ; j <= n ; j = j+i ){
            isPrime[j] = true;      //uske multiples ko true krna hai (== nhi krna hai)
        }
    }
}

    for(int i=2; i <= n ; i++){
        if(isPrime[i]== false){
            cout<< i << " ";
        }
    }


}


int main() {
    int n;
    cout<<"Enter a no: ";
    cin>>n; 

    prime(n);
return 0;
}
#include <iostream>
#include <cmath> // Include cmath for pow function

using namespace std;

float gm(int n){
    if(n==0){
        return 1; // Make sure to return a float
    }
    else{
        return gm(n-1) + 1/pow(2,n); 
    }
}

int main() {
    cout<<"enter a no-";
    int n;
    cin >> n;

    cout << "result is : " << gm(n);

    return 0;
}

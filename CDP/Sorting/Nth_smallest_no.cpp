// return the nth smallest no. 

#include <bits/stdc++.h>
using namespace std;

int smallest(int arr[], int s, int n){
    sort(arr , arr + s);

    return arr[n -1];
}


int main() {
int n,s;

cout<<"enter size : ";
cin>>s;

int arr[s];   // size input lene ke bad call krna hai

cout<<"enter array : ";
for (int i = 0; i < s; i++) {
    cin >> arr[i];
    }

cout<<"enter nth smallest no.";
cin>>n;

cout<<smallest(arr,s , n);


return 0;
}
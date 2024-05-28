// space complexity remains O(1). -> without using any extra space.

#include <bits/stdc++.h>
using namespace std;


void rev(vector <int>& arr){    // *&*  is very imp for changing the orig result.
    int start=0;
    int end = arr.size() - 1 ; 

    while(start < end){
        swap( arr[start] , arr[end]);
        start++;
        end--;
    }
}


int main() {
int n;
cout<<"enter size : ";
cin>>n;

vector <int> arr(n);

cout<<"enter elements : ";
for(int& i : arr){
    cin>>i;
}


rev(arr);     //call the function to make changes in array(vector)

for(int i =0; i< n ; i++){
    cout<<arr[i]<<" ";
}

// for (int i : arr) {
//         cout << i << " ";     // range based for loop
//     }

return 0;
}
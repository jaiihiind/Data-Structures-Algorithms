#include <bits/stdc++.h>
using namespace std;

vector <int> revStr(vector <int> arr){
    reverse(arr.begin() , arr.end());
    return arr;

}

int main() {
int n;
cout<<"Enter size: ";
cin>>n;

vector <int> arr(n);
cout<<"Enter array : ";
for(int i=0 ; i< n; i++){
    cin>>arr[i];
}

arr = revStr(arr);

cout<<"reversed array is : ";
for(int& i : arr){
    cout<<i<<" ";
}

return 0;
}
// Count the duplicates in the arrray -> eak se jyada bar repaeat ho rhe hai jo

#include <bits/stdc++.h>
using namespace std;

int dupCnt ( vector <int>& arr){   // & -> used to change in the main array, not its copy
    map<int, int> freq;    // eak me <no., count> store krta hai

    for(int i=0; i< arr.size(); i++){
        freq[arr[i]]++;    // pure arr me count krte raho
    }


    int count=0;
    for( map<int,int>::iterator i = freq.begin() ;   i != freq.end() ;   i++){

        if(i->second > 1){      // first->stores no.(value)   second-> stores key(count)
            count++;
        }
    }

    return count;
}

int main() {
int n;
cout<<"Enter size of array: ";
cin>>n;

vector <int> arr(n);
cout<<"Enter elements: ";

// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

for(int& i: arr){
    cin>>i;
}

cout<<"Duplicate elements are: "<<dupCnt(arr);

return 0;
}
#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)          // key--> finding (index)
{
    int start = 0;
    int end = size - 1;
    
    int mid = (start + end) / 2;       //! more correct way -->  [ s + (e - s) / 2 ] --> keeps the value in range

    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){             //? Going right part 
            start = mid + 1;
        }
        else{                                 //? Going Left part
            end = mid - 1;
        }
        mid = (start + end) / 2;       //todo  (reinitialise the mid : (start / end) may be updated)
    }
    return 0;                             // invalid case return 0;  (unfound in input)
}

int main(){
    int even[3] = {2, 4, 7};
    int odd[4] = {5, 8, 5, 9};

    int index = binarysearch(odd, 4, 9);                           //*put  ur input here
    cout << "The binary search result is : " << index << endl;

    return 0;
}

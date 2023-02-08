#include <iostream>
using namespace std;
int main()
{
    int n,arr[n], element;

    bool found = 0; //todo > Its an element used b/c else stat. can't be used here >> it updates the value

    cout<<"Enter size : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter your element to be searched: ";
    cin>>element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            cout<<"Element found!";
            found=1;
            break;          //b/c >>to avoid any duplicate elements
        }
    }

    if(!found){
        cout<<"element not found";
    }
    
return 0;
}
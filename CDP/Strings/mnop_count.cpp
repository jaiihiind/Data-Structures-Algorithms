// Properties for magic string are :
//  1. The summed number of m's and o's is even.
//  2. The summed number of n's and p's is even.


#include <iostream>
using namespace std;
#include <string>

bool MagicString(string S) {

    int mCount = 0, nCount = 0, oCount = 0, pCount = 0;
    
        for (int i = 0; i < S.length(); i++) {
        	        if (S[i] == 'm') {
        	        	            mCount++;
        	        } 
					if (S[i] == 'n') {
        	        	            nCount++;
        	        } 
					if (S[i] == 'o') {
        	        	            oCount++;
        	        } 
					if (S[i] == 'p') {
        	        	            pCount++;
        	        }
        }
	 return (mCount + oCount) % 2 == 0 && (nCount + pCount) % 2 == 0 ? 1:0;    //? Tertiary operator

    // if-else condition does'nt works here
	}


int main() {
	cout<<"Enter String: ";
    string S;
    cin>>S;

	//cout << MagicString(S) << "\n";
	if(MagicString(S)){
		cout<<"Yes its a magic number ";
	}
	else{
	cout<<"Jaldi wahan se hato";
	}
	return 0;
}
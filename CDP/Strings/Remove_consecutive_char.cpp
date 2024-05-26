// remove the consecutive characters .. eak ke bad eak nhi ana chahiye
#include <iostream>
using namespace std;
#include <string>
#include<bits/stdc++.h>

string removeConsecutiveCharacters(string str) {
	string res;
	
	for(int i=0; i< str.length(); i++){
		if (str[i] != str[i+1]){   //age wala element check krega
			//res += str[i];

            res.push_back(str[i]);      // res me push_kro (str[i])
		}
	}
return res;
}


int main() {
	string str;
    cout<<"Enter string: ";
    cin>>str;
	cout << removeConsecutiveCharacters(str) << "\n";
	return 0;
}


/* one more case ------
if( i == str.length() -1  )    --> means the last eelemetn 
                                  first elem. ke equal hai 
                                  eak hi element hai   */

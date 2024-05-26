// Anagram - same letter se different words .    eat = ate, ant = tan

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string n, string p){
    sort(n.begin(), n.end());               // dono ko sort krke compare kr lo
    sort(p.begin(), p.end());

    return (n==p) ? 1 : 0 ;
}


int main() {
string n,p;
cout<<"enter 1st string : ";
cin>>n;
cout<<"enter 2nd string : ";
cin>>p;

if(isAnagram(n,p)){
    cout<<"Anagram hai";
}
else{
    cout<<"lauki hai bhai";
}
return 0;
}
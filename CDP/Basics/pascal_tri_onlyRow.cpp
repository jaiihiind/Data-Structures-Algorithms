#include<bits/stdc++.h>
using namespace std;

 vector<int> pascal_triangle (int rowIndex) {    //function hai, jo vector return krega
//2D tab banana hai jab full rows return krna hai, here only asked rows return kro

	vector<int> row(rowIndex + 1, 1);  // (size, elem) --- sare places me 1 hoga,size given input - vector(size,elem.)
	for (int i = 1; i < rowIndex; i++) {    // for rows
		for (int j = i; j > 0; j--) {      // for row ke elements
			row[j] = row[j] + row[j - 1];
			// [1 1]
		   //  [1 2 1]  ==> 2 = uske just upar & uske pehle wala
}}
	return row;
};

int main() {

int rowIndex;
cout<<"Enter row no: ";
cin>>rowIndex ;
vector<int> result = pascal_triangle(rowIndex);
for (int num : result) {
cout << num << " ";
}

return 0;
}
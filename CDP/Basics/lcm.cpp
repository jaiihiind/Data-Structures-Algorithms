//LCM means dono me se bada wala no. hoga, ya uska multiple hoga.....jo dono ke multiple ho

#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int maxNum = max(a, b);    // max no. se start krenge

// Start from max no.to Infin. and jump as multiples of maxNum.
    for (int i = maxNum; ; i += maxNum) {
        if (i % a == 0 && i % b == 0) {    // divided from both
            return i; 
        }
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}


// The method is same for 3-4 numbers just change 1-max_of_numbers  2-divide_conditins
// max(max(a,b),c)      ,     && extra add krna hai
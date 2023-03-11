#include<iostream>
#include<stack>             //todo    --> Implementation of Stacks
using namespace std;
 
class stacks{
    public:
    int *arr;
    int top ;
    int size ;


stacks (int r){
    this -> size = r;   // Can be (r) or (size) >> RHS only
    arr = new int [r];
    top = -1;
}

int push (int element){              //? Return type can be >> void / int
    if(top == size -1){             // Stacks index starts from >> 1 <<
        cout<< " Stack overflow"<<endl;
    }
    else{
         top ++;
        arr[top]  = element;
    }
}

int pop(){                           //? Return type can be >> void / int
    if (top == -1){
        cout<<"Stack underflow"<< endl;
    }
    else{
        top --;
    }
}

    int peek(){                     //?For getting the top element
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
            // return -1;
        }
    }


};   //     ***ALL OPERATIONS ARE INSIDE CLASS***



int main()
{
    stacks s(6);          //! take care of brackets type
    s.push(3);
    s.push(8);
    s.push(5);
    s.push(7);
    cout<<"Original"<<endl;
    cout<<s.peek()<<endl;

    cout<<"After pop"<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    
    return 0;
} 

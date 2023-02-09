#include<iostream>
#include<stack>             //todo    --> Implementation of Stacks
using namespace std;
 
class stacks{
    public:
    int *arr;
    int top ;
    int size ;


stacks (int s){
    this -> size = s;   // Can be (s) or (size)> RHS only
    arr = new int [s];
    top = -1;
}

int push (int element){              //? Return type can be >> void / int
    if(size - top >= 0){             // Stacks index starts from >> 1 <<
        top ++;
        arr[top]  = element;
    }
    else{
        cout<< " Stack overflow"<<endl;
    }
}

int pop(){                           //? Return type can be >> void / int
    if (top > 0){
        top --;
    }
    else{
        cout<<"Stack underflow"<< endl;
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


};



int main()
{
    stacks s(6);          //! take care of brackets type
    s.push(3);
    s.push(8);
    s.push(5);
    s.push(7);
    cout<<"Original"<<endl;
    cout<<s.peek()<<endl;

    cout<<"After push"<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    
    return 0;
} 


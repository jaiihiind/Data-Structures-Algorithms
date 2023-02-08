//todo ***< Array -> Deletion kr dijiye  >***


#include<stdio.h>
int main (){
    int pos, n, arr[100];
    printf("Size de do bhai :  \n");
    scanf("%d",&n);

    printf("Enter elements->\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nDelete kahan karna hai ? ");
    scanf("%d",&pos);
    if(pos >= n){
        printf("delete nhi kr sakte ");
    }
    else {                  // ye loop eak eak elem. ko peeche kr dega jahan se delete hona hai
        for(int i=pos-1; i<n; i++ ){   //pos-1(arr ke sath match krne ke liye)
            arr[i] = arr[i+1];      //! (age wale ki value peeche me ho jayegi)
        }
    
    }

    printf("Final array -> \n");
    for(int i=0; i<n-1;i++ ){           //? (n-1) b/c size eak kam ho gaya(n natural & arr (n-1))
        printf("%d\n", arr[i]);
    }
return 0;
}
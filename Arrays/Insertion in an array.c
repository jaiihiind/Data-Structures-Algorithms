//todo    ***Insertion in an Array***

#include<stdio.h>
int main() {
    int n, arr[100],value,pos;

    printf("Size bataye : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Kahan pe insert krna hai ?");
    scanf("%d",&pos);
    printf("Kya dalna hai ?");
    scanf("%d",&value);
    for(int i=n-1; i>=pos; i--){     //! Backtracing b/c -> if forward traced, then the pos.(of the next) will be lost
        arr[i+1] = arr[i];
    }                               //jahan pe dalna hai, eak-eak pos. age badana hai(*pos.* ko khali karna hai bass)
        arr[pos] =  value;

    
    printf("Apka array -> \n");
    for(int i=0; i<n+1; i++){
        printf("%d\n",arr[i]);
    }


    
return 0;
}



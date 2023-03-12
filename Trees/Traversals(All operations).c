#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * createNode(int data){
    struct node *p;     //created a node pointer
    p = malloc(sizeof(struct node));       //allocated memory in heap
    p->data= data;
    p->left = NULL;
    p->right = NULL;
    return p;     //very imp to return the created node

}

void PreOrderTraversal(struct node* root){
    if(root != NULL){
    printf("%d ", root -> data);
    PreOrderTraversal(root -> left);           //? Recursion used
    PreOrderTraversal(root -> right);

    }
}

void PostOrderTraversal(struct node * root){
    if(root != NULL){
    PostOrderTraversal(root -> left);           
    PostOrderTraversal(root -> right);
    printf("%d ", root -> data);
    }
}

void InOrderTraversal(struct node * root){
    if(root != NULL){
    PostOrderTraversal(root -> left);           
    printf("%d ", root -> data);
    PostOrderTraversal(root -> right);
    }
}


int main() {
    struct node *a = createNode(3);   //1st create & then call the function
    struct node *a1 = createNode(2);   
    struct node *a2 = createNode(6); 
    struct node *a3 = createNode(1); 
    struct node *a4 = createNode(9); 

    a -> left = a1;          //linking the node
    a -> right = a2; 
    a1 -> left = a3;
    a1 -> right = a4;
    
    printf("Pre order : ");
    PreOrderTraversal(a);  //give input as a root 
    printf("\n");

    printf("Post order : ");
    PostOrderTraversal(a);
    printf("\n");

    printf("In order : ");
    InOrderTraversal(a);

return 0;
}

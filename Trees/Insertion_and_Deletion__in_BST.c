#include <stdio.h>
#include <stdlib.h>



struct node {
	int data;
	struct node *left;
	struct node *right;
};


struct node* newNode(int data){
	struct node *p = malloc(sizeof(struct node));
	p -> data = data;
	p -> left = p -> right = NULL;
	return p;
}


void inorder(struct node* root){
	if (root != NULL) {
		inorder(root->left);
		printf("%d \n", root->data);
		inorder(root->right);
	}
}





struct node* insert(struct node* node, int data)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return newNode(data);

	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	return node;            /* return the (unchanged) node pointer */
}






struct node *inOrderPredecessor(struct node* root){   // Basically the left side of the root(top)
    root = root->left;				// Left side of root
    while (root->right != NULL)		  // Right most side of left subtree (jab tak null nhi ho jata)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){
    struct node* iPre;

    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL && root->right==NULL){   // leaf node(most bottom)
        free(root);
        return NULL;
    }
    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found

    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}





int main()
{
	
	struct node* root = NULL;
	root = 
	insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);

	inorder(root);
	printf("\n");
	deleteNode(root,50);
	inorder(root);

	return 0;
}

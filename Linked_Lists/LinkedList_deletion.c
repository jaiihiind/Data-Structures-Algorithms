#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while(ptr!= NULL){
        printf("Elements -> %d \n", ptr->data);
        ptr = ptr->next;
    }
}



//todo ***Deleting the 1st node***
struct node *delete1st(struct node*head){
    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

//todo ***Deleting at a given index***

struct node *deleteIndex(struct node*head, int index){
    struct node *p = head;
    struct node *q = head-> next;

    for(int i=0; i<index-1; i++){
        p= p-> next;
        q= q->next;                     
    }
    p -> next = q -> next;                  //index ki value q me store kara di
    free(q);
    return head;
}



//todo ***Deleting last node***

struct node *deleteLast(struct node*head){
    struct node *p = head;
    struct node *q = head-> next;
    while(q -> next != NULL){
        p = p -> next;                          //? Same case as the (Index)deletion
        q = q -> next;
    }
    p -> next = q -> next ;
    free(q);
    return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head ->data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data =3;
    third -> next = NULL;

    printf("Linked list before deletion -> \n");
    traversal(head);

    //head = delete1st(head);
    head = deleteIndex(head,2);
   // head = deleteLast(head);

    printf("Linked list delete krne ke bad -> \n");
    traversal(head);
    
return 0;
}
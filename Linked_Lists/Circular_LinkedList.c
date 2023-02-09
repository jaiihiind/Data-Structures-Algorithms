#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node  *next;
};

void traversal(struct node *head){
    struct node*ptr = head;
    do{
        printf("Elements -> %d \n", ptr -> data);
        ptr = ptr -> next;
    }while(ptr != head);
}

struct node * InsertAtFirst(struct node *head ,int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr ->data = data;
    struct node *p = head->next;
    while(p->next != head ){
        p  = p->next;
    }
    p ->next = ptr;
    ptr -> next = head;
    head = ptr;
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
    third -> next = head;       //points this to head (loop)

    printf("Before insertion -> ");
    traversal(head);

    printf("After insertion  -> ");
    head = InsertAtFirst(head , 99);
    traversal(head);
return 0;
}
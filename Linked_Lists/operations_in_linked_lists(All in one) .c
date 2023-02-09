#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;    // just dynam. allocate kr rhe hai , next ko ( only initialise )
};



void LinkedListTraversal(struct node*ptr){
    while (ptr != NULL){
        printf("Elements : %d\n", ptr->data);
        ptr=ptr->next;
    }

}

struct node*InsertAtFirst (struct node*head, int data){
    struct node*ptr = malloc(sizeof(struct node));
    ptr ->data= data;

    ptr ->next = head;
    head = ptr;     // head ko update kiya hai
    return head;    //can also be return ptr;
}


struct node *InsertAtIndex (struct node*head, int data,int index){
    struct node*ptr = malloc(sizeof(struct node));
    struct node *p = head;
    int i =0;   
    while(i != index-1){
        p= p->next;
        i++;
    }
    ptr-> data = data;
    p->next = ptr -> next;      //beech me linking banani hai(p -> ptr -> index)
    p->next = ptr;                 // >>ptr hawa me rehta hai
    return head;
    
}

struct node*InsertAtEnd (struct node*head, int data){
    struct node*ptr = malloc(sizeof(struct node));
    struct node*p = head;
    ptr->data = data;

    ptr->next = NULL;
    while(p->next != NULL){
        p= p->next;   // age badate raho p ko jab tak NULL nhi ho jata
    }

    p->next = ptr;
    ptr -> next = NULL;
    return head;
}




int main() {

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head =  malloc(sizeof(struct node));
    second =  malloc(sizeof(struct node));
    third =  malloc(sizeof(struct node));
    forth =  malloc(sizeof(struct node));

    head->data=2;
    head ->next =second;

    second ->data= 3;
    second ->next =third;

    third->data = 6;
    third ->next = forth;

    forth ->data = 9;
    forth -> next = NULL;

  printf("Linked list before insertion\n");
    LinkedListTraversal(head);
     head = InsertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
     printf("\nLinked list after insertion\n");
    LinkedListTraversal(head);



    
return 0;
}

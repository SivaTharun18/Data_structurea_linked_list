#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node* createlist(struct node *head){
    struct node *temp=NULL,*newnode=NULL;
    int choice=1;
    while(choice==1){
        newnode=(struct node*)(malloc(sizeof(struct node)));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
        head=temp=newnode;}
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter choice 1 to continue 0 to stop");
        scanf("%d",&choice);

    }
    return head;

}
void display(struct node *head){
    struct node *temp=head;
    if (head==NULL){
        printf("list is empty");
    }
    printf("linked list is:");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("null\n");
}
struct node* insertlasts(struct node *head){
    struct node *temp=NULL,*newnode=NULL;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newnode;
    return head;
}
struct node* insertfirst(struct node *head){
    struct node *newnode=NULL;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}
int main(){
    struct node *head=NULL;
    head=createlist(head);
    display(head);

    head=insertlasts(head);
    display(head);

    head=insertfirst(head);
    display(head);



    return 0;
}




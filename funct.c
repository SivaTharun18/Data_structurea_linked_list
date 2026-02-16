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
int main(){
    struct node *head=NULL;
    head=createlist(head);
    display(head);
    return 0;
}




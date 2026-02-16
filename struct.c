#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    int choice=1;
    while(choice == 1){
        newnode=(struct node*)malloc(sizeof(struct node ));
        printf("enter data");
        scanf("%d",newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode=temp;
        }
        printf("enter choice :");
        scanf("%d",&choice);

    }
    return 0;
}


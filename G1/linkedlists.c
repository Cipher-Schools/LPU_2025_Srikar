#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int data;
    struct node* next;
}node;
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insertAtEnd(node** head, int data){
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newNode=malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    temp->next=newNode;
}
int main(){
    node* head=(node*)malloc(sizeof(node));
    head->data=3;
    node* node2=(node*)malloc(sizeof(node));
    node2->data=5;
    head->next=node2;
    node* node3=(node*)malloc(sizeof(node));
    node3->data=8;
    node3->next=NULL;
    node2->next=node3;
    insertAtEnd(&head,9);//call by reference
    traverse(head);//call by value
    printf("\n%d",head->data);
}
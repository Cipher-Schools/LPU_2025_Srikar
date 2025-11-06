#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int data;
    struct Node* next;
}Node;
Node* createNode(int data){
    Node* newNode=malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
Node* insertAtEnd(Node* head,int data){
    if(head==NULL){
        return createNode(data);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=createNode(data);
    return head;
}
int main(){
    int n;
    scanf("%d",&n);
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int data;
        scanf("%d",&data);
        head=insertAtEnd(head,data);
    }   
    Node* curr=head;
    Node* next=curr->next;
    Node* temp=head;
    printf("Before swapping: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(curr!=NULL && next!=NULL){
        int data1=curr->data;
        int data2=next->data;
        curr->data=data2;
        next->data=data1;
	if(next!=NULL)
       		curr=next->next;
	if(curr!=NULL)
        	next=curr->next;
    }
    temp=head;
    printf("\nAfter swapping: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
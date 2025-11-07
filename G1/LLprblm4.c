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
    Node* temp=head;
    while(temp->next!=NULL){
        //printf("%d ",temp->data);
        temp=temp->next;
    }   
    temp->next=head;
    int lshift;
    scanf("%d",&lshift);
    int i=0;
    Node* prev=NULL;
    while(i<lshift){
        prev=head;
        head=head->next;
        i++;
    }
    prev->next=NULL;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }  
}
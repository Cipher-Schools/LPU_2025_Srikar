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
    int e;
    scanf("%d",&e);
    Node* prev;
    Node* curr;
    prev=NULL;
    curr=head;
    if(e<curr->data){
        Node* newNode=createNode(e);
        newNode->next=head;
        head=newNode;
    }
    while(curr!=NULL){
        prev=curr;
        curr=curr->next;
        if(prev->data<e && curr->data>e){
            Node* newNode=createNode(e);
            prev->next=newNode;
            newNode->next=curr;
            break;
        }
        else if(curr!=NULL && curr->next==NULL && curr->data<e){
            Node* newNode=createNode(e);
            curr->next=newNode;
            break;
        }
    }
    Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
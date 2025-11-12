#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
    printf("Original Linked List: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }   
    Node* curr=head;
    Node* prev=NULL;
    int count=1;
    while(curr!=NULL){
        if(count%2==0){
            prev->next=curr->next;
            curr=curr->next;
        }else if(count==1){
            prev=head;
            curr=head->next;
        }else{
            prev=prev->next;
            curr=curr->next;
        }
        count++;
    }
    temp=head;
    printf("\nFinal Linked List: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }   
}
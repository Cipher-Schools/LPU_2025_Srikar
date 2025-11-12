#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int data;
    struct Node* next;
}Node;
Node* createNode(int data){
    Node* newNode=malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Memory exception");
        return NULL;
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void traverse(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void deleteAtPos(Node** head, int deletePos){
    if(*head==NULL || deletePos<1){
        return;
    }
    int pos=1;
    Node* prev=NULL;
    Node* curr=*head;
    while(curr!=NULL){
        prev=curr;
        curr=curr->next;
        pos++;
        if(pos==deletePos){
            prev->next=curr->next;
            break;
        }
    }
    if(deletePos>pos){
        printf("Invalid input position");
    }
}
void insertAtPos(Node** head,int insertPos,int e){
    if(*head==NULL && insertPos<1){
        return;
    }
    else if(*head==NULL && insertPos==1){
        Node* newNode=createNode(e);
        *head=newNode;
        return;
    }
    Node* prev=NULL;
    Node* curr=*head;
    int pos=1;
    while(curr!=NULL){
        prev=curr;
        curr=curr->next;
        pos++;
        if(pos==insertPos){
            Node* newNode=createNode(e);
            prev->next=newNode;
            newNode->next=curr;
        }
    }
    if(insertPos>pos){
        printf("Invalid position");
    }
}
int main(){
    Node* head=createNode(9);
    Node* node2=createNode(1);
    head->next=node2;
    Node* node3=createNode(5);
    node2->next=node3;
    Node* node4=createNode(6);
    node3->next=node4;
    Node* node5=createNode(10);
    node4->next=node5;
    Node* node6=createNode(2);
    node5->next=node6;
    deleteAtPos(&head,3);
    //traverse(head);
    insertAtPos(&head,3,5);
    traverse(head);
}
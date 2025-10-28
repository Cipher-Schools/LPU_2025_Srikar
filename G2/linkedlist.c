#include <stdio.h>
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
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    Node* head=malloc(sizeof(Node));
    //pointer to datatype
    //pointer to int *
    //pointer to pointer
    head->data=3;
    head->next=NULL;
    Node* node2=malloc(sizeof(Node));
    node2->data=5;
    head->next=node2;
    node2->next=NULL;
    Node* node3 = malloc(sizeof(Node));
    node3->data = 8;
    node2->next = node3;
    node3->next=NULL;
    Node* node4=createNode(9);
    node3->next=node4;
    Node* node5=createNode(1);
    node4->next=node5;
    traverse(head);
}
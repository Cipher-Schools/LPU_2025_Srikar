#include <stdio.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
typedef struct Circular{
    Node* head;
    Node* tail;
}Circular;
typedef struct DLLNode{
    int data;
    Node* prev;
    Node* next;
}DLLNode;
typedef struct DLL{
    DLLNode* head;
    DLLNode* tail;
}
Node* createNode(int data){
    Node* newNode=malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
int main(){
    Circular c;
    c.head=NULL;
    c.tail=NULL;
    Node* head=c.head;
    Node* tail=c.tail;
    Node* newNode=createNode(1);
    head->data=newNode->data;
    head->next=head;
    tail=head;
}
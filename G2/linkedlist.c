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
void insertAtEnd(Node* head, int data){
    if(head==NULL){
        Node* newNode=createNode(data);
        return newNode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=createNode(data);
    temp->next=newNode;
}
Node* insertAtHead(Node* head, int data){
    if(head==NULL){
        Node* newNode=createNode(data);
        return newNode;
    }
    Node* temp=head;
    Node* newNode=createNode(data);
    newNode->next=temp;
    head=newNode;
    return head;
}
void insertAtPos(Node* head,int data,int insertpos){
    if(head==NULL){
        Node* newNode=createNode(data);
        return newNode;
    }
    int pos=1;
    Node *temp=head;
    while(temp!=NULL){
        pos++;
        if(insertpos==pos){
            Node* prev=temp;
            Node* next=temp->next;
            Node* newNode=createNode(data);
            prev->next=newNode;
            newNode->next=next;
        }
        temp=temp->next;//NULL
    }
}
void deleteFromEnd(Node* head){
    if(head==NULL){
        return;
    }
    Node* prev=NULL;
    Node* current=head;
    while(current->next!=NULL){
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
}
Node* deleteFromHead(Node* head){
    if(head==NULL){
        return;
    }
    Node* next=head->next;
    head=next;
    return head;
}
void deleteFromPos(Node* head,int deletepos){
    if(head==NULL){
        return;
    }
    int pos=1;
    Node* curr=head;
    while(curr!=NULL){
        Node* prev=curr;
        Node* next=curr->next;
        pos++;
        if(pos==deletepos){
            prev->next=next->next;
        }
        curr=curr->next;
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
    insertAtEnd(head,10);
    head=insertAtHead(head,20);
    insertAtPos(head,25,8);
    deleteFromEnd(head);
    head=deleteFromHead(head);
    deleteFromPos(head,4);
    deleteFromPos(head,5);
    traverse(head);
}
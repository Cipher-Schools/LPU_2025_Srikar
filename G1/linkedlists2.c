#include <stdio.h>
#include <stdlib.h>
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
};
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
void traverseCLL(Node* head){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
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
void insertAtEndCLL(Node* head, int data){
    if(head==NULL){
        Node* newNode=createNode(data);
        newNode->next=newNode;
        return newNode;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* newNode=createNode(data);
    temp->next=newNode;
    newNode->next=head;
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
Node* insertAtHeadCLL(Node* head, int data){
    if(head==NULL){
        Node* newNode=createNode(data);
        newNode->next=newNode;
        return newNode;
    }
    Node* temp=head;
    Node* newNode=createNode(data);
    newNode->next=temp;  
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
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
void deleteFromEndCLL(Node* head){
    if(head==NULL && head->next==head){
        return;
    }
    Node* prev=NULL;
    Node* current=head;
    while(current->next!=head){
        prev=current;
        current=current->next;
    }
    prev->next=head;
}
Node* deleteFromHead(Node* head){
    if(head==NULL && head->next==NULL){
        return NULL;
    }
    Node* next=head->next;
    head=next;
    return head;
}
Node* deleteFromHeadCLL(Node* head){
    //4 3 5 8 6 
    if(head==NULL && head->next==head){
        return NULL;
    }
    Node* prevHead=head;
    Node* next=head->next;//3
    head=next;//new head 3
    Node* temp=head;//starting from new head
    while(temp->next!=prevHead){
        temp=temp->next;
    }
    temp->next=head;
    return head;
}
void deleteFromPos(Node* head,int deletepos){
    if(head==NULL){
        return NULL;
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
    node3->next=head;
    head=insertAtHeadCLL(head,4);
    insertAtEndCLL(head,6);
    head=deleteFromHeadCLL(head);
    deleteFromEndCLL(head);
    traverseCLL(head);

}
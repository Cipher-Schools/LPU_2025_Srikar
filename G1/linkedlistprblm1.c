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
Node* insertAtHead(Node* head, int data){
    Node *newNode=createNode(data);
    newNode->next=head;
    head=newNode;
    return head;
}
int main(){
    int n;
    scanf("%d",&n);
    Node* head;
    for(int i=0;i<n;i++){
        int data;
        scanf("%d",&data);
        head=insertAtHead(head,data);
    }
    Node* temp=head;
    printf("Created Linked list: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    int last;
    scanf("%d",&last);
    head=insertAtHead(head,last);
    temp=head;
    printf("\nFinal List: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
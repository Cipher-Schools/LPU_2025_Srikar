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
bool linearSearch(int arr2[],int e,int size){
    for(int i=0;i<size;i++){
        if(arr2[i]==e){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    //Node* head=NULL;
    int arr1[n];
    for(int i=0;i<n;i++){
        int data;
        scanf("%d",&arr1[i]);
        //head=insertAtEnd(head,data);
    }
    int m;
    scanf("%d",&m);
    //Node* head=NULL;
    int arr2[m];
    for(int i=0;i<n;i++){
        int data;
        scanf("%d",&arr2[i]);
        //head=insertAtEnd(head,data);
    }
    Node* head=NULL;
    for(int i=0;i<n;i++){
        bool isIn=linearSearch(arr2,arr1[i],m);
        if(!isIn){
            head=insertAtEnd(head,arr1[i]);
        }
    }
    printf("Before deletion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    if(head==NULL){
        printf("\nAfter deletion: \nElements in both lists are same");
    }else{
        Node* temp=head;
        printf("\nAfter deletion: ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }   
    }
}

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
typedef struct{
    Node* head;
    int count;
    int capacity;
}Stack;
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
Stack push(Stack st,int e){
    if(st.capacity==st.count){
        printf("Stack overflow");
        return st;
    }
    Node* temp=st.head;
    Node* newNode=createNode(e);
    if(temp==NULL){
        st.head=newNode;
        st.count++;
        return st;
    }
    newNode->next=temp;
    temp=newNode;
    st.head=temp;
    st.count++;
    return st;
}
Stack pop(Stack st){
    if(st.count==0){
        return st;
    }
    Node* temp=st.head;
    st.head=temp->next;
    free(temp);
    st.count--;
    return st;
}
int top(Stack st){
    Node* temp=st.head;
    if(temp==NULL){
        return -1;
    }
    return temp->data;
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
int main(){
    Stack st;
    st.count=0;
    st.capacity=10;
    st.head=NULL;
    st=push(st,5);
    st=push(st,10);
    st=pop(st);
    st=push(st,15);
    st=push(st,20);
    st=pop(st);
    st=pop(st);
    st=pop(st);
    printf("%d\n",top(st));
    traverse(st.head);
}
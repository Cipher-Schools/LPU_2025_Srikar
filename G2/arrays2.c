#include <stdio.h>
#include <stdlib.h>
int* insert(int arr[], int size, int idx,int key){
    int* ptr=malloc((size+1)*sizeof(int));//pointer to array
    for(int i=0;i<idx;i++){
        ptr[i]=arr[i];
    }
    ptr[idx]=key;
    for(int i=idx+1;i<size+1;i++){
        ptr[i]=arr[i-1];
    }
    return ptr;
}
int * delete(int arr[],int size,int idx){
    int* ptr=malloc((size-1)*sizeof(int));
    for(int i=0;i<idx;i++){
        ptr[i]=arr[i];
    }
    for(int i=idx;i<size-1;i++){
        ptr[i]=arr[i+1];
    }
    return ptr;
}
int main(){
    int arr[]={9,1,2,5,7};
    //insert an element in this array
    int size=sizeof(arr)/sizeof(int);
    int *ptr=insert(arr,size,2,10);
    for(int i=0;i<size+1;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    int *ptr1=delete(arr,size,2);
    for(int i=0;i<size-1;i++){
        printf("%d\t",ptr1[i]);
    }
}
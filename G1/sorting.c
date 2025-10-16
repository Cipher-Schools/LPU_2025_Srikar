#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int size){
    int i=0;
    while(i<size-1){
        for(int j=0;j<size-i-1;j++){//or simply size-1
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
}
void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int min_idx=i;//first element of the unsorted section
        for(int j=i+1;j<size;j++){//in this loop we find the min_idx
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        swap(&arr[min_idx],&arr[i]);
    }
}
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={8,1,2,7,5,3,4};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
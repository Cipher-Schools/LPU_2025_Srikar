// You are using GCC
#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int size){
    int i=0;
    while(i<size-1){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
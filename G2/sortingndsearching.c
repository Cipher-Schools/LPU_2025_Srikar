#include <stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[], int n){
    int i=0;
    while(i<n-1){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIdx=i;//0, 1, 2
        for(int j=i+1;j<n;j++){//1 to n
            if(arr[minIdx]>arr[j]){
                minIdx=j;//6, 3, 5
            }
        }
        swap(&arr[minIdx],&arr[i]);//0 and 6, 1 and 3, 5 and 2
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){ 
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int binarySearch(int arr[],int key,int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,9,8,2,4,7};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n%d",binarySearch(arr,2,n));
}
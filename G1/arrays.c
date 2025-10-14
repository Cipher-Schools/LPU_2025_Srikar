#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int sumOfElements(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
//return a struct with min and max as properties from a function
struct Dog{
    int age;
    char name[50];
};
typedef struct Man{
    int age;
    char name[50];
}Man;//aliasname
typedef struct{
    int min;
    int max;
}result;
result maxmin(int arr[],int size){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    result r;
    r.max=max;
    r.min=min;
    return r;
}
//insert an element into an array
//1. Create a new array of size, size+1 and pass it as input to the function
//2. Create an array in heap in the function
int* insert(int arr[], int size, int idx, int key){
    int *ptr=malloc((size+1)*sizeof(int));//pointer to array
    for(int i=0;i<idx;i++){
        *(ptr+i)=arr[i];
    }
    ptr[idx]=key;
    for(int i=idx+1;i<size+1;i++){
        ptr[i]=arr[i-1];
    }
    return ptr;
}
int* deletion(int arr[], int size, int idx){
    int* ptr=malloc((size-1)*sizeof(int));
    for(int i=0;i<idx;i++){
        ptr[i]=arr[i];
    }
    for(int i=idx+1;i<size;i++){
        ptr[i-1]=arr[i];
    }
    return ptr;
}
int main(){
    int arr[]={9,1,3,5,8};
    //use a function to find sum of all elements in this array
    int size=sizeof(arr)/sizeof(int);
    printf("%d\n",sumOfElements(arr,size));
    struct Dog dog1;
    dog1.age=20;
    Man man1;
    man1.age=50;
    result res=maxmin(arr,size);
    printf("Max is: %d, min is %d\n",res.max, res.min);
    int newArr[size+1];
    int * ptr=insert(arr,size,2,10);
    for(int i=0;i<size+1;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    int *ptr1=deletion(arr,size,3);
    for(int i=0;i<size-1;i++){
        printf("%d\t",ptr1[i]);
    }
}
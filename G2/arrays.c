#include <stdio.h>
#include <string.h>
#include <limits.h>
int sumOfElements(int arr[],int size){
    //int size1=sizeof(arr)/sizeof(int);
    //printf("%d",size1);
    //the above technique fails because
    //array gets degraded to pointer
    //and when we call sizeof on array
    //we get 4 bytes
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];//assignment operator +=
    }//O(1)*n=O(n)
    return sum;
}
struct Dog{//definition
    int age;
    char name[50];
};
typedef struct Dog1{//definition
    int age;
    char name[50];
}Dog1;//aliasname
typedef struct result{
    int min;
    int max;
}result;
result findMinMax(int arr[],int size){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    result r;
    r.min=min;
    r.max=max;
    return r;
}
//increment each element of an array 
//and print it in main
void incArray(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]++;
    }
}
//key, array and size
//find the key and return the index
int linearSearch(int arr[],int key, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5]={9,1,3,5,2};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("%d\n",sumOfElements(arr,size));
    struct Dog dog1;//declaration
    Dog1 dog2;
    dog2.age=10;
    strcpy(dog2.name,"Snoofy");
    printf("Dog's name: %s,dog's age:%d\n",dog2.name,dog2.age);
    result out=findMinMax(arr,size);
    printf("Array's min:%d, array's max:%d\n",out.min,out.max);
    incArray(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
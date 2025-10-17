#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int maxe(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    //array-[0,0,0,1,1,2,3,100]
    //0-3
    //1-2
    //2-1
    //3-1 
    //100-1
    //all elements will be less than a max value. no neg values
    //find count array
    int arr[]={0,0,0,1,1,2,3,100};
    int size=sizeof(arr)/sizeof(int);
    int max=maxe(arr,size);
    int* out=calloc(max+1,sizeof(int));
    for(int i=0;i<size;i++){
        out[arr[i]]++;
    }
    for(int i=0;i<max+1;i++){
        printf("%d\t",out[i]);
    }
}
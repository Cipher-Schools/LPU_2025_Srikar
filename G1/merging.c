#include <stdio.h>
int main(){
    int arr1[]={1,2,7,9};
    int arr2[]={3,6,5};
    int arr3[8];
    int i=0,j=0,k=0;
    while(i<4 && j<3){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<4){
        arr3[k++]=arr1[i++];
    }
    while(j<3){
        arr3[k++]=arr2[j++];
    }
    /*for(int i=0;i<4;i++){
        arr3[i]=arr1[i];
    }
    for(int i=4;i<8;i++){
        arr3[i]=arr2[i-4];
    }*/
    for(int i=0;i<7;i++){
        printf("%d\t",arr3[i]);
    }
}
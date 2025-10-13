#include <stdio.h>
int main(){
    int arr[5]={9,1,3,5,2};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
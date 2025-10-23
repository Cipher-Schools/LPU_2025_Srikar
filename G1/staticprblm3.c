// You are using GCC
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int arr1[n-1];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr1[i]);
    }
}
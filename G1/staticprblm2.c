// You are using GCC
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int e;
    scanf("%d",&e);
    int arr2[n+1];
    for(int i=0;i<n;i++){
        arr2[i+1]=arr[i];
    }
    arr2[0]=e;
    for(int i=0;i<n+1;i++){
        printf("%d ",arr2[i]);
    }
}
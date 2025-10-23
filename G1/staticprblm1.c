// You are using GCC
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d ",&arr2[i]);
    }
    int arr3[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",arr3[i]);
    }
}
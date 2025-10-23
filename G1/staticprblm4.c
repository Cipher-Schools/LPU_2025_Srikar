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
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==e){
            count++;
            if(count==2){
                printf("%d",i);
                break;
            }
        }
    }
    if(count<2){
        printf("Key not found or found only once");
    }
}
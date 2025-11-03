#include <iostream>
using namespace std;
int main(){
    int x=3;
    int *ptr=&x;
    int &var=x;//reference variable. aliasname
    //both have same address
    int var1=x;//normal variable
    cout<<var<<endl;
    var=5;
    cout<<x<<endl;
    cout<<&var<<endl;
    cout<<&x<<endl;
    void *ptr1=&x;
    int arr[10]={1,2,3,4,5};
    int *ptrarry=arr;
    cout<<*(ptrarry+3)<<endl;
    int arr2d[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //int *ptr2d=&arr2d;//failing
   // int *ptr2d1[3]=&arr2d;//failing
    //int **ptr2d2=&arr2d;//failing
    //int (*ptr2d3)[3][4]=&arr2d;//success
    //int (*ptr2d4)[4]=arr2d;//success
    //cout<<ptr2d[0]<<endl;
    int *ptrint=new int;
    int *ptrarry=new int[10];
    delete ptrarry;
    cout<<ptrarry[0]<<endl;
    int (*ptr2darry)[4]=new int[2][4];
}
#include <iostream>
using namespace std;
void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printRect(int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printHollowSquare(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
void printTriangleAlpha(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    //rectangular grid of lenght m and width n
    //printPattern(10);
    //printRect(4,3);
    printTriangleAlpha(5);
}
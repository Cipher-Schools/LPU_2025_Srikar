#include <iostream>
#include <iomanip>
int add(int x, int y=5);//default parameter
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void swap1(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int test(int (&arr)[5]);
int main(){
    std::cout<<add(2)<<std::endl;
    double pi=3.1415926359;
    std::cout<<std::scientific<<pi<<std::endl;
    std::cout<<std::setprecision(2)<<pi<<std::endl;
    int a=3,b=5;
    swap1(a,b);
    std::cout<<a<<" "<<b<<std::endl;
}
inline int add(int x, int y){
    return x+y;
}
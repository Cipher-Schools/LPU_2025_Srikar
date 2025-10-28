// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
const double PI=3.14;

struct Circle{
    double radius;
};

void calculateArea(Circle* circle){
    double area=PI*(circle->radius)*(circle->radius);
    cout<<fixed<<setprecision(2)<<area<<endl;
}

int main(){
    Circle circle;
    cin>>circle.radius;
    calculateArea(&circle);
    return 0;
}
// You are using GCC
#include <iostream>
using namespace std;
class Triangle{
    private:
        double side1, side2, side3;
    public:
        Triangle(double s1, double s2, double s3){
            side1=s1;
            side2=s2;
            side3=s3;
        }
        
        friend void classifyTriangle(Triangle triangle);
};

void classifyTriangle(Triangle triangle){
    if(triangle.side1==triangle.side2 && triangle.side1==triangle.side3){
        cout<<"Equilateral triangle"<<endl;
    }
    else if(triangle.side1==triangle.side2 || triangle.side1==triangle.side3 ||
    triangle.side2==triangle.side3){
        cout<<"Isosceles triangle"<<endl;
    }
    else{
        cout<<"Scalene triangle"<<endl;
    }
}
int main(){
    double s1,s2,s3;
    cin>>s1>>s2>>s3;
    Triangle triangle(s1,s2,s3);
    classifyTriangle(triangle);
}
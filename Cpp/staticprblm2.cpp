// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class Circle{
    private:
        double r;
    public:
        double area;
        double circumference;
        static int circleCount;
        Circle(){
            circleCount++;
        }
        static int getCircleCount(){
            return circleCount;
        }
        void setRadius(double r){
            this->r =r;
        }
        double calculateArea(){
            area=3.14159*r*r;
            return area;
        }
        double calculateCircumference(){
            circumference=2*3.14159*r;
            return circumference;
        }
        void displayDetails(){
            cout<<"Radius: "<<fixed<<setprecision(2)<<r<<endl<<"Area: "<<fixed<<setprecision(2)<<area<<endl<<"Circumference: "<<fixed<<setprecision(2)<<circumference<<endl;
        }
};
int Circle::circleCount=0;
int main(){
    int n;
    cin>>n;
    Circle c[n];
    double r=0;
    for(int i=0;i<n;i++){
        cin>>r;
        c[i].setRadius(r);
    }
    cout<<Circle::circleCount<<endl;
    for(int i=0;i<n;i++){
        c[i].calculateArea();
        c[i].calculateCircumference();
        c[i].displayDetails();
    }
}
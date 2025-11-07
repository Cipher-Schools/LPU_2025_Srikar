#include <iostream>
using namespace std;
class Man{
    public:
        int *age;
        string name;
        Man(){cout<<"test"<<endl;}
        Man(int age,string name){
            this->age=&age;
            this->name=name;
            //cout<<this<<endl;
        }
};
void test(int x){
    cout<<"test address"<<&x<<endl;
}
int main(){
    int *ptr;
    //cout<<*ptr<<endl;
    int x=10;
    cout<<"main address"<<&x<<endl;
    test(x);
    cout<<x<<endl;
    Man man(x,"Srikar");
    //cout<<&man<<endl;
    //cout<<man.age<<endl;
    cout<<*(man.age)<<endl;
    //Man* man1=new Man[10];
    Man man2[10];
    string str="Srikar";
    cout<<str.capacity()<<endl;
    str.push_back('R');
    str.reserve(100);
    cout<<str.capacity()<<endl;
    str.shrink_to_fit();
    cout<<str.capacity()<<endl;
}
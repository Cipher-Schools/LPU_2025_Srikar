#include <iostream>
using namespace std;
struct Dog{
    int age;
    string name;
    Dog(int a,string name){
        age=a;
        this->name=name;
        cout<<"Dog created"<<endl;
    }
};
class Man{
    public:
        int age;
        string name;
        Man(){}
        Man(int age,string name){//same name as the class name
            this->age=age;
            this->name=name;
            cout<<"Man is created"<<endl;
        }
};
int main(){
    int a=10;
    int *ptr=&a;//declaration & initialization of a pointer
    Dog dog(10,"Snoofy");//no need of new or malloc
    Dog* dogptr=&dog;
    dogptr->age=10;
    Dog* dogptr1=new Dog(15,"Chichu");
    Man man(25,"Rohit");
    Man* manptr=&man;
    (*manptr).age=20;
    manptr->name="Rohit";
    Man *manptr1=new Man(15,"Sharma");//instead of malloc
    int arr[5];
    int *arrptr=arr;//&arr[0]
    int *arrptr1=new int[10];//block of 10*4 bytes is allocated on heap
    //and a pointer to this block is returned
    Man *manaryptr=new Man[10];//constructor is called all 10 times
    (*(manaryptr+5)).age=25;//manaryptr[5]
    manaryptr+=5;
    manaryptr->age=20;
}
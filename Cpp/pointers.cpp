#include <iostream>
using namespace std;
typedef struct{
    int age;
    string name;
}Dog;
class Man{
    public:
        int age;
        string name;
        Man(){//same name as the class name
            cout<<"Man is created"<<endl;
        }
};
int main(){
    int a=10;
    int *ptr=&a;//declaration & initialization of a pointer
    Dog dog;//no need of new or malloc
    Dog* dogptr=&dog;
    Man man;
    Man* manptr=&man;
    (*manptr).age=20;
    manptr->name="Rohit";
    Man *manptr1=new Man();//instead of malloc
    int arr[5];
    int *arrptr=arr;//&arr[0]
    int *arrptr1=new int[10];//block of 10*4 bytes is allocated on heap
    //and a pointer to this block is returned
    Man *manaryptr=new Man[10];//constructor is called all 10 times
    (*(manaryptr+5)).age=25;//manaryptr[5]
    manaryptr+=5;
    manaryptr->age=20;
}
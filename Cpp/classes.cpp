#include <iostream>
using namespace std;
struct Man{
    int age;
    string name;
    void talk(){
        cout<<"Man is talking"<<endl;
    }
};
typedef struct{
    int age;
    string name;
    void think(){
        cout<<"Woman is thinking"<<endl;
    }
}Woman;//aliasname
class Dog{
    private:
        int age;
        string name;
    public:
        void bark(){
            cout<<"Barks"<<endl;
        }
        void setAge(int age){
            this->age=age;
        }
        void setName(string name){
            this->name=name;
        }
        int getAge(){
            return age;
        }
        string getName(){
            return name;
        }
        friend class Human;
        friend void printVars(const Dog& dog);
};
void printVars(const Dog& dog){
    cout<<dog.age<<" "<<dog.name;
}
class Human{
    public:
        void print(const Dog& dog){
            cout<<dog.age<<" "<<dog.name;
        }
};
class Counter{
    public:
        static int count;//declaration
        static void inc(){
            count++;
        }
};
int Counter::count=0;//definition and initialization
int main(){
    Dog dog;
    dog.setAge(10);
    dog.setName("Snoofy");
    dog.bark();
    Human h;
    //h.print(dog);
    printVars(dog);
    cout<<endl;
    cout<<"Dog's age:"<<dog.getAge()<<",name:"<<dog.getName()<<endl;
    struct Man m;
    m.talk();
    Woman w;
    w.think();
    Counter c1;
    c1.inc();
    Counter c2;
    c2.inc();
    Counter::inc();
    Counter::inc();
    cout<<Counter::count<<endl;

}
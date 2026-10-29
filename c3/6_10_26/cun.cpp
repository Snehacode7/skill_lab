#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barking: "<<endl;
    }
};
class Cat : public Animal{
    public:
    void meow(){
        cout<<"Cat is meowing: "<<endl;
    }
};
int main(){
    Dog d;j
    d.eat();
    d.bark();
    Cat c;
    c.eat();
    c.meow();
    return 0;
}


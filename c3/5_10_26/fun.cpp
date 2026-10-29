//create a c++ program using a class name student
// the class should have a data member to store the students name
// a constructor that receives the student name and initializes it
// a method name show() that display the student name
// inthe main function , create two student objects with different name and call the show() method for both objects
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(string n){
        name=n;
    }
void show(){
    cout<<"Student name = "<<name<<endl;
}
};
int main(){
Student stud1("Sneha");
Student stud2("Chanda");
stud1.show();
stud2.show();
return 0;
}
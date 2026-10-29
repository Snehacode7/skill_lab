//create a c++ employee management sytem using inheritance 
//requirements:crete a base class name employee with following private data members
//. name .employee id
//the employee class should have 
//1.a parameterized constructor to initialize name and employee id
//a function showEmployee() to display the employee details
//now create a derived class name trainer that inherits from employee
// the trainer class should have these additional data members
//1.subject 2. experience
//the trainer class should have a constructor that recieves all four value
//1. name 2. employee id 3. subject 4. experience
//the trainer class should have a function showTrainer() to display the trainer details
// in main function create an object of trainer with value similar to Trainer t("rahul", 101,"c++", 4);
// display the output in this format:
// Name:Rahul
// Employee ID:101
// Subject:C++
// Experience:4 years
//rules:
//name and employeeId must remain private inside the Employee class 
// the employee class must have a parameterized constructor
//do not create a default constructor in employee
// do not remove inheritance just to make the program work
// try to solve any constructor-related error you encounter
#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeId;

public:
    Employee(string n, int id) : name(n), employeeId(id) {}

    void showEmployee() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

class Trainer : public Employee {
private:
    string subject;
    int experience;

public:
    Trainer(string n, int id, string sub, int exp) : Employee(n, id), subject(sub), experience(exp) {}

    void showTrainer() {
        showEmployee();
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main() {
    Trainer t("rahul", 101, "c++", 4);
    t.showTrainer();
    return 0;
}

#include<iostream>
using namespace std;
class Student{
    public : int m1, m2, m3;
    void inputMarks(){
cout<<"Enter the marks of 3 subjects";
cin>> m1>>m2>>m3;
    }
    int calculateTotal(){
        return m1+m2+m3;
    }
    float calculatePercentage(){
        return (m1+m2+m3)/3.0;
    }
    void displayResult(){
        int t= calculateTotal();
        float per=calculatePercentage();
        cout<<"total ="<<t<<endl;
        cout<<"Percent= "<<per<<endl;
    }
};
int main(){
    cout<<"This is for student s1: "<< endl;
    Student s1;
    s1.inputMarks();
    s1.displayResult();
    cout<<"This is for student s2: "<<endl;
    Student s2;
    s2.inputMarks();
    s2.displayResult();
    return 0;
}
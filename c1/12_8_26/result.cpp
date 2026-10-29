#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks";
    cin>>marks;
    if(marks>=90 && marks<=100)
    cout<<"Grade A";
    else if(marks>=70 && marks<90)
    cout<<"Grade B";
    else if(marks>=50 && marks<70)
    cout<<"Grade C";
    else if(marks<50 && marks>=0)
    cout<<"FAIL";
    else 
    cout<<"Invalid marks";
    return 0;
}
#include<iostream>
using namespace std;
void max(){
    int a,b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    if(a>b){
        cout<<"a is greater";
    }
    else{
        cout<<"b is greater";
    }
}
void prod (int a, int b, int c){
cout<<"Multiplication: "<<(a*b*c);
}

int main(){
max();
    prod(10,20,30);
    return 0;
}
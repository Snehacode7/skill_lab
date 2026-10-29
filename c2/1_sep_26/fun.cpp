#include<iostream>
using namespace std;
void add(){
    int a=10,b=20;
    cout<<"Sum= "<<(a+b);
}
void prod(int a,int b){
    cout<<"Product= "<<(a*b);
}
int div(){
    return 10/2;
}
int sub(int a,int b){
    return a-b;
}
int main(){
add();
prod(5,6);
int ans=div();
cout<<ans;
int dif=sub(5,10);
cout<<dif;
return 0;
}
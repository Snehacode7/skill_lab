#include<iostream>
using namespace std;
string check(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%2==0)
    return "Even";
    else
        return"odd";
}
int prod(int a,int b){
    return a*b;
}
int main(){
     cout<<"multiplication: "<<prod(5,6)<<endl;
    cout<<check();
    return 0;

}
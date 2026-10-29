#include<iostream>
using namespace std;
int main(){
    int f0=0,f1=1,f2,n;
    cout<<"Enter n";
    cin>>n;
    cout<<"Fibonacci series: ";
    cout<<f0<<f1;
    for(int i=1; i<n; i++){
        f2=f0+f1;
        cout<<f2;
        f0=f1;
        f1=f2;
    }return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem, prod=1;
    cout<<"Enter n";
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        prod=prod*rem;
        n=n/10;
    }if(sum==prod){
        cout<<"Number is special";
    }
    else{
        cout<<"Number is not special";
    }
    return 0;
}
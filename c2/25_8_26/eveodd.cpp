#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"Enter the number";
    cin>>n;
    if(n>0){
    for(int i=1; i<=n; i++){
        if(i%2==0){
        even=even+i;
        }else{
            odd=odd+i;
        }
    }cout<<"Even:"<<even<<endl;
    cout<<"Odd:"<<odd<<endl;
}else{
    cout<<"please enter positive";
}
}
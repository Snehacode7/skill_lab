#include<iostream>
using namespace std;
int main(){
    int n,s=0,d,temp;
cout<<"Enter number";
cin>>n;
temp=n;
while(n>0){
    d=n%10;
    s=s+d*d*d;
    n=n/10;
}
if(s==temp){
    cout<<"number is special";
}
else{
    cout<<"number is not special";
}
return 0;
}
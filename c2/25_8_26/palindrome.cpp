#include<iostream>
using namespace std;
int main(){
    int n,rev=0,d,temp;
cout<<"Enter number";
cin>>n;
temp=n;
while(n>0){
    d=n%10;
    rev=rev*10+d;
    n=n/10;
}
if(rev==temp){
    cout<<"number is palindrome";
}
else{
    cout<<"number is not palindrome";
}
return 0;
}
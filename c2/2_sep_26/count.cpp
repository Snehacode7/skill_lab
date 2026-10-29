#include<iostream>
using namespace std;
int count(int n){
    int rem,count=0;
    while(n>0){
    rem=n%10;
    count++;
    n=n/10;}
return count;
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
int ans=count(n);
cout<<ans;
return 0;
}
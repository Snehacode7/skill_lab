#include<iostream>
using namespace std;
int sum(int n){
    int arr[n];
    int ld,fd,sum=0;
    ld=n%10;
    while(n>=10){
        n=n/10;
    }
    fd=n;
    sum=fd+ld;
    return sum;
}
int main(){
    int x;
    cout<<"Enter number";
    cin>>x;
    int ans=sum(x);
    cout<<"Ans = "<<ans;
    return 0;
}
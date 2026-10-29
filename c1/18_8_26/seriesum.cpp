#include<iostream>
using namespace std;
int main(){
    int n,i,s=1;
    cout<<"Enter n";
    cin>>n;
    for(i=1; i<=n; i++){
    s=i*i+1;
    cout<<s<<endl;
    }
    return 0;
}
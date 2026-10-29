//one-dimensional array
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        sum+=arr[i];
    }cout<<"Sum"<<"="<<sum;
    return 0;
}
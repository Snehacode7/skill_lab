#include<iostream>
using namespace std;
int main(){
    int arr[]={10,15,5,2,35,30};
    int max=0;
     for(int i=1; i<=5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }cout<<"max: "<<max<<endl;
    for(int i=5; i>=0; i--){
        cout<<arr[i]<<endl;
    }return 0;
}
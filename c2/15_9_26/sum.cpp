#include<iostream>
using namespace std;
int sum_array(int arr[]){
    int sum=0;
    int l=sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<l; i++){
        sum+=arr[i];
    }return sum;
}
int main(){
    int A[]={4,5,6};
sum_array(A);
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n=123,temp=0,arm=0;
    while(n>0){
    temp=n%10;
    arm=arm+temp*temp*temp;
    n=n/10;
    }cout<< arm;
    return 0;
}
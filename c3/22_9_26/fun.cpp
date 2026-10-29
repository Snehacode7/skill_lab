#include<iostream>
using namespace std;

void add(int &a, int &b, int &c ){
    cin>> a;
    cin>> b;
    cin>> c;

}
int calculateTotal(int a, int b, int c){
    return a+b+c;
}
float calculatePercentage(int total){
    return (total/300)*100;
}
int main(){
    int a,b,c;
    add(a,b,c);
    int t= calculateTotal(a,b,c);
    float percent= calculatePercentage(t);
    cout<<t<<" "<<percent<<" ";
    return 0;
}


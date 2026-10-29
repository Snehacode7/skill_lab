//wap to read a number and display all digits of the number in different line
#include<iostream>
using namespace std;
int main(){
    int n,digit,i;
    cout<<"Enter a number";
    cin>>n;
   while(n>!0) {
    digit=n%10;
        cout<<digit<<"\n";
        n=n/10;
    }
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout<<"Enter operator";
    cin>>choice;
    switch(choice){
        case'+':cout<<a+b<<":add"<<endl;
        break;
         case'-':cout<<a-b<<":sub"<<endl;
         break;
         case'*':cout<<a*b<<":mult"<<endl;
         break;
         case'/':cout<<a/b<<":division"<<endl;
         break;
         default:cout<<"Enter valid operation";
         break;
        
    }
         return 0;
}
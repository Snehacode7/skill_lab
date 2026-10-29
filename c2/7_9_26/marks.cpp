#include<iostream>
using namespace std;
int main(){
    int a[4], b[4],c[4];
    int i,sum1=0,sum2=0,sum3=0;
    cout<<"Enter a,b,c marks";
    for(i=0; i<4; i++){
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    for(i=0; i<4; i++){
         sum1+=a[i];
         sum2+=b[i];
         sum3+=c[i];
    }
    cout<<"Avg of A"<<sum1/4.0<<endl;
    cout<<"Avg of B"<<sum2/4.0<<endl;
    cout<<"Avg of c"<<sum3/4.0<<endl;
    return 0;
}
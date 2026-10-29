#include<iostream>
using namespace std;
void table(int n,int x){
    for(int i=1; i<=x; i++){
        cout<<n*i<<endl;
}
}
int main(){
    table(5,10);
    return 0;
}
#include<iostream>
using namespace std;
void table(int k){
    for(int i=1; i<=10; i++){
        cout<<i*k<<endl;
}
}
int main(){
    table(5);
    table(6);
    return 0;
}
#include<iostream>
using namespace std;
void fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++ ){
        fact=fact*i;
    }cout<<fact;
}
int main(){
    fact(5);
    return 0;
}
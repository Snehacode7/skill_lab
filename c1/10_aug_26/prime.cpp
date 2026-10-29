#include<iostream>
using namespace std;
int main(){
    int Prime=0,n=9;
    for(int i=1; i<=n; i++){
   if(n%i==0 ){
   Prime++;
   }
}if(Prime==0){
    cout<< "number is prime";
}
else{
    cout<< "number is composite";
}return 0;
}
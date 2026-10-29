#include<iostream>
using namespace std;
bool prime(int n){
     if(n < 2){
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void primeUpTo(int n ){
for(int i=1; i<=n; i++){
    if(prime(i)){
        cout<<i;
    }
}
}
int main(){
    int x;
    cout<<"Enter n";
    cin>>x;
    bool ans=bool(x);
    cout<<ans<<endl;
    primeUpTo(x);
return 0;
}
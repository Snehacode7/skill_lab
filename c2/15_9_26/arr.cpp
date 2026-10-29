#include<iostream>
using namespace std;
void studentMarks(){
    int A[5],B[5],C[5],D[5];
    cout<<"enter the marks";
    for(int i=0; i<5; i++){
        cin>>A[i];
        cin>>B[i];
        cin>>C[i];
        cin>>D[i];
    }
    for(int i=0; i<5; i++){
        cout<<A[i]<<endl;
        cout<<B[i]<<endl;
    cout<<C[i]<<endl;
    cout<<D[i]<<endl;
    }
}
    int main()
    {
        studentMarks();
        return 0;
    }

#include<iostream>
using namespace std;
void studentMarks(){
    int marks[4][5];
    char ch='A';
    for(int i=0; i<4; i++){
      cout<<"Enter the marks of"<<ch<<"\n";
        for(int j=0; j<5; j++){
        cin>>marks[i][j];
    }
    ch++;
    cout<<"\n";
    } for(int i=0; i<4; i++){
      cout<<"Enter the marks of"<<"\n";
        for(int j=0; j<5; j++){
        cout<<marks[i][j];
    }
    }
    
}
    int main()
    {
        studentMarks();
        return 0;
    }

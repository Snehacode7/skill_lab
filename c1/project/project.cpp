#include<iostream>
using namespace std;
int main(){
int rollnum,Totalmarks=0,percent,n=0;
int marks[5];
string name;
bool shortageflag=false;
cout<<"Enter the name";//name
cin>>name;
cout<<"Enter roll number";//roll num
cin>>rollnum;
cout<<"Enter the marks of Five Subjects";//marks
for(int i=0; i<5; i++){
    cin>>marks[i];
    if(marks[i]<33)
    shortageflag=true;
Totalmarks=Totalmarks+marks[i];}//total marks
percent=Totalmarks/5;
percent=percent*100;//percent
if(shortageflag==true){
    cout<<"Fail-subject shortage";
}
else{
switch(percent/10){
    case 10:
    case 9:
    cout<<"grade A"<<endl;
    break;
    case 8:
    case 7: cout<<"grade B"<<endl;
    break;
    case 6:cout<<"grade C"<<endl;
    break;
    default:cout<<"grade D"<<endl;
    break;
}
}
cout<<"report";
cout<<"Name:"<<name<<endl;
cout<<"Roll Number"<<rollnum<<endl;
for(int i=0; i<5; i++){
    cout<<marks[i]<<endl;
}
cout<<"Totalmarks:"<<percent<<endl;
cout<<"Total percent:"<<Totalmarks<<endl;
    return 0;
}
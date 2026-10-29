#include <iostream>
using namespace std;
class City{
    public:
    string name;
    City(string n){
        name=n;
    }
    void display(){
        cout<<"City name is: "<<name<<endl;
    }
};
int main(){
    City city1("Kanpur");
    City city2("Lucknow");
    city1.display();
    city2.name="Gorakhpur"; 
    city2.display();
    return 0;
}

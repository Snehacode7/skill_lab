/*
for domestic(home) rate per unit=rs 5,bill=units*5;
for commercial(shop)rate per unit=rs 8,bill=units*8;
for industrial rate per unit=rs 10,bill=units*10;
All the common things (consumer id, name , units) go in parent. Each childs only decides its own bill.
1. Base class connections 
Data members(protected):consumerId(int), consumerName(string),Units(int)
a constructor that receives these 3 values and stores them
showDetails():prints consumer ID, name and units used
virtual int calculateBill():simply returns 0
2. Child classes Domestic,commercial, Industrial
Each one inherits from connectioms usingt public inheritance
Each has a constructor that passes the 3 values to the Connection constructor
Each overrides calculateBill() using its own rate from the table above
3. The main()Function
create one domestic, one Commercial and one industrial object using the sample data below
For each consumer :call showDetails(), then print the bill using calculateBill()
total amount to collect for the officer
*/
#include <iostream>
#include <string>
using namespace std;

class Connection {
protected:
    int consumerId;
    string consumerName;
    int Units;

public:
    Connection(int id, string name, int units);
    void showDetails();
    virtual int calculateBill();
};

Connection::Connection(int id, string name, int units) {
    consumerId = id;
    consumerName = name;
    Units = units;
}

void Connection::showDetails() {
    cout << "Consumer ID: " << consumerId << endl;
    cout << "Consumer Name: " << consumerName << endl;
    cout << "Units Used: " << Units << endl;
}

int Connection::calculateBill() {
    return 0;
}

class Domestic : public Connection {
public:
    Domestic(int id, string name, int units) : Connection(id, name, units) {}
    int calculateBill() override {
        return Units * 5;
    }
};

class Commercial : public Connection {
public:
    Commercial(int id, string name, int units) : Connection(id, name, units) {}
    int calculateBill() override {
        return Units * 8;
    }
};

class Industrial : public Connection {
public:
    Industrial(int id, string name, int units) : Connection(id, name, units) {}
    int calculateBill() override {
        return Units * 10;
    }
};

int main() {
    Domestic domestic(1001, "Sneha", 120);
    Commercial commercial(2002, "Nandini", 200);
    Industrial industrial(3003, "Chanda", 500);

    cout<<"========Electricity Bill==========="<<endl;

    domestic.showDetails();
    cout << "Domestic Bill: " << domestic.calculateBill() << endl;
    cout <<"-------------------------------------------------"<<endl;

    commercial.showDetails();
    cout << "Commercial Bill: " << commercial.calculateBill() << endl;
    cout<<"--------------------------------------------------"<< endl;

    industrial.showDetails();
    cout << "Industrial Bill: " << industrial.calculateBill() << endl;
    cout <<"--------------------------------------------------"<< endl;

    

    return 0;
}
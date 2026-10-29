#include <iostream> #include <string> using namespace std;

class Connection { protected: int consumerId; string consumerName; int units;

public: Connection(int id, string name, int u) { consumerId = id; consumerName = name; units = u; }

void showDetails() { cout << "Consumer ID: " << consumerId << endl; cout << "Consumer Name: " << consumerName << endl; cout << "Units Used: " << units << endl; }

virtual int calculateBill() { return 0; } };

class Domestic : public Connection { public: Domestic(int id, string name, int u) : Connection(id, name, u) { }

int calculateBill() override { return units * 5; } };
//a shopkeeper record the prices of 6 products in one dimensioal array  
//Wap a c++ program that store the prices of 6 products in an array.
// create a function findHighest() that returns the highest price
// creat e another function countExpensive() that returns how many products more than 500
// display all product prices , the highest price and the number ofr expensive product
#include <iostream>
using namespace std;

int findHighest(int prices[], int size) {
    int highest = prices[0];
    for (int i = 1; i < size; i++) {
        if (prices[i] > highest) {
            highest = prices[i];
        }
    }
    return highest;
}

int countExpensive(int prices[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (prices[i] > 500) {
            count++;
        }
    }
    return count;
}

int main() {
    int prices[6] = {400, 600, 300, 700, 500, 800};
    int size = 6;

    cout << "Product Prices: ";
    for (int i = 0; i < size; i++) {
        cout << prices[i] << " ";
    }
    cout << endl;

    cout << "Highest Price: " << findHighest(prices, size) << endl;
    cout << "Number of Expensive Products: " << countExpensive(prices, size) << endl;

    return 0;
}
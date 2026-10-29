//wap to the following
//1.create a functiion which will accept a number and return true if it is prime otherwise return false
//2. create a array named numbers and store random 8 values
//3. create another array which will store true and false according to numbers in the number arrray
//4. display the boolean array
#include <iostream>
using namespace std;
bool Prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}int main() {
    int numbers[8] = {3, 4, 5, 6, 7, 8, 9, 10};
    bool value[8];
    for (int i = 0; i < 8; i++) {
        value[i] = Prime(numbers[i]);
    }

    cout << "Boolean array indicating prime status:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Number: " << numbers[i] << " is prime: " << (value[i] ? "true" : "false") << endl;
    }

    return 0;
}

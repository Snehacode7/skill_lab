// A coaching teacher wants to store the marks of student A in 5 subjects using one dimension.
// write a c++ program that store the marks of 5 subjects in an arrray.
// uses the function to check whether the student is pass or fail.
// store the result pass oe not pass in another array.
//Display the final result in the following format:
//->45- pass
// -> 30- not pass, etc
#include <iostream>
using namespace std;

bool checkPass(int marks) {
    return marks >= 30;
}

int main() {
    int subjects[5] = {45, 30, 60, 25, 70};
    bool result[5];

    for (int i = 0; i < 5; i++) {
        result[i] = checkPass(subjects[i]);
    }

    for (int i = 0; i < 5; i++) {
        cout << "->" << subjects[i] << "- " << (result[i] ? "pass" : "not pass") << endl;
    }

    return 0;
}
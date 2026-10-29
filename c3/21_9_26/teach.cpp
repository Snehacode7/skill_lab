//A tution teacher want to store the marks of 3 students and five subjects in a 2D array. 
// store marks of students as follows:
// Student a= = 10,25,9,35,45
// Student b= = 20,30,15,40,50
// Student c= = 30,35,25,45,55
//A student is considered passed if average marks is above 35
//now he wants to create another array with values passed and fail for all the three students.
#include <iostream>
using namespace std;

int main(){
    int marks[3][5] = {
        {10, 25, 9, 35, 45}, // Student a
        {20, 30, 15, 40, 50}, // Student b
        {30, 35, 25, 45, 55}  // Student c
    };
    bool passed[3];
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 5; j++) {
            sum += marks[i][j];
        }
        double average = sum / 5.0;
        passed[i] = (average > 35);
    }
    for(int i = 0; i < 3; i++) {
        cout << "Student " << (char)('a' + i) << ": " << (passed[i] ? "Passed" : "Failed") << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// Parent class
class Student {
protected:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Method to display student details
    void displayStudent() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Child class
class Result : public Student {
private:
    int maths;
    int science;

public:
    // Constructor
    Result(string n, int r, int m, int s)
        : Student(n, r) {
        maths = m;
        science = s;
    }

    // Calculate total marks
    int calculateTotal() {
        return maths + science;
    }

    // Display result
    void displayResult() {
        displayStudent();

        cout << "Maths Marks: " << maths << endl;
        cout << "Science Marks: " << science << endl;
        cout << "Total Marks: " << calculateTotal()
             << " out of 200" << endl;
    }
};

// Main function
int main() {
    string name;
    int rollNo, maths, science;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Maths Marks (out of 100): ";
    cin >> maths;

    cout << "Enter Science Marks (out of 100): ";
    cin >> science;

    Result student(name, rollNo, maths, science);

    cout << "\n===== STUDENT RESULT =====" << endl;
    student.displayResult();

    return 0;
}
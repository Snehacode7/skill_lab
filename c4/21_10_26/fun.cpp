// design and implement a student result managment system using oops in c++.
/*the system should manage a student academic information,calculate their results and display their performance 
requirements:
create a base class person with name and age.
derive a class student from person. Include roll number, marks for five subjects, percentage, and grade.
use parameterized constructors to initialize each students information
implement member methods to input marks.. calculate total and percentage, assign a grade, and display a student's complete record.
use loops to add and process multiple students.
build a menu driven program using switch or if-else.
REquired menu operation
1.add a student 2. display all students 3. search by roll number 4. display students who have failed 5. exit
*/
#include<iostream>
using namespace std;
class Person {
    protected:
        string name;
        int age;
    public:
        Person(string n, int a) : name(n), age(a) {
            
        }
    };
    class Student : public Person {
        private:
            int rollNumber;
            float marks[5];
            float total;
            float percentage;
            char grade;
        public:
            Student(string n, int a, int r) : Person(n, a), rollNumber(r), total(0), percentage(0), grade('F') {
                for(int i = 0; i < 5; i++) {
                    marks[i] = 0;
                }
            }
            
            void inputMarks() {
                cout << "Enter marks for 5 subjects for " << name << ": ";
                for(int i = 0; i < 5; i++) {
                    cin >> marks[i];
                    total += marks[i];
                }
                percentage = total / 5;
                assignGrade();
            }
            
            void assignGrade() {
                if(percentage >= 90) grade = 'A';
                else if(percentage >= 80) grade = 'B';
                else if(percentage >= 70) grade = 'C';
                else if(percentage >= 60) grade = 'D';
                else grade = 'F';
            }
            
            void displayRecord() {
                cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber 
                     << ", Total Marks: " << total << ", Percentage: " << percentage 
                     << "%, Grade: " << grade << endl;
            }
            
            int getRollNumber() {
                return rollNumber;
            }
            
            bool hasFailed() {
                return grade == 'F';
            }
    };
    int main() {
        int choice;
        Student* students[100];
        int studentCount = 0;
        
        do {
            cout << "Menu:\n1. Add a student\n2. Display all students\n3. Search by roll number\n4. Display students who have failed\n5. Exit\nEnter your choice: ";
            cin >> choice;
            
            switch(choice) {
                case 1: {
                    string name;
                    int age, rollNumber;
                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter age: ";
                    cin >> age;
                    cout << "Enter roll number: ";
                    cin >> rollNumber;
                    students[studentCount] = new Student(name, age, rollNumber);
                    students[studentCount]->inputMarks();
                    studentCount++;
                    break;
                }
                case 2: {
                    for(int i = 0; i < studentCount; i++) {
                        students[i]->displayRecord();
                    }
                    break;
                }
                case 3: {
                    int rollNumber;
                    cout << "Enter roll number to search: ";
                    cin >> rollNumber;
                    bool found = false;
                    for(int i = 0; i < studentCount; i++) {
                        if(students[i]->getRollNumber() == rollNumber) {
                            students[i]->displayRecord();
                            found = true;
                            break;
                        }
                    }
                    if(!found) {
                        cout << "Student with roll number " << rollNumber << " not found." << endl;
                    }
                    break;
                }
                case 4: {
                    for(int i = 0; i < studentCount; i++) {
                        if(students[i]->hasFailed()) {
                            students[i]->displayRecord();
                        }
                    }
                    break;
                }
                case 5:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while(choice != 5);
        for(int i = 0; i < studentCount; i++) {
            delete students[i];
        }
        
        return 0;
    }


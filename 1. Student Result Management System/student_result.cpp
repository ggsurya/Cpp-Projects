#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

    void calculateGrade()
    {
        if (marks >= 90) grade = 'A';
        else if (marks >= 75) grade = 'B';
        else if (marks >= 60) grade = 'C';
        else if (marks >= 40) grade = 'D';
        else grade = 'F';
    }

public:
    void inputDetails()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks (out of 100): ";
        cin >> marks;

        calculateGrade();
    }

    void displayDetails() const
    {
        cout << left << setw(20) << name
             << setw(10) << rollNumber
             << setw(10) << marks
             << setw(5) << grade << endl;
    }
};

int main()
{
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Enter Details for Student " << i + 1 << " ---\n";
        Student s;
        s.inputDetails();
        students.push_back(s);
    }

    cout << "\n================== Student Report ==================\n";
    cout << left << setw(20) << "Name"
         << setw(10) << "Roll No"
         << setw(10) << "Marks"
         << setw(5) << "Grade" << endl;
    cout << "----------------------------------------------------\n";

    for (const auto &student : students)
    {
        student.displayDetails();
    }

    cout << "====================================================\n";

    return 0;
}

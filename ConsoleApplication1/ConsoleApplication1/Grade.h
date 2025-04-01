// Grade class
#ifndef GRADE_H
#define GRADE_H
#include <iostream>
#include <string>
using namespace std;

class Grade {
private:
    string studentID;
    string courseCode;
    int grade;
    static int count;

public:
    // Constructor
    Grade(string sID, string cCode, int g) : studentID(sID), courseCode(cCode), grade(g) {
        ++count;
    }
    // Destructor
    ~Grade() {
        cout << "Destructor dla ochinok " << studentID << " za kursom " << courseCode << " vyklykano" << endl;
        --count;
    }
    // stotic func to get coun
    static int getCount() {
        return count;
    }

    void display() const {
        cout << "ID: " << studentID << " Cod course: " << courseCode << " Grade: " << grade << endl;
    }

};


#endif




/* Unary operator++
Grade& operator++() {
    ++this->grade;
    return *this;
}

// Binary operator+
Grade operator+(const Grade& other) const {
    return Grade(studentID, courseCode, grade + other.grade);
}

// Friend operators for input/output
friend ostream& operator<<(ostream& os, const Grade& grad);
friend istream& operator>>(istream& is, Grade& grad);

 Copy constructor
Grade(const Grade& other) {
    this->studentID = other.studentID;
    this->courseCode = other.courseCode;
    this->grade = other.grade;
    ++count;
}*/


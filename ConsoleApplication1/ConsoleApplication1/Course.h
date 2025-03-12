#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseName;
    string courseCode;
    int credut;

public:
    Course(string name, string code, int cr) : courseName(name), courseCode(code), credut(cr) {}

    // Move constructor
    Course(Course&& other) noexcept // bez vunyatkiv
        : courseName(move(other.courseName)),
        courseCode(move(other.courseCode)),
        credut(other.credut) {
        cout << "Move constructor dla course " << courseName << " vuklukano" << endl;
    }

    ~Course() {
        cout << "destructor dla course " << courseName << " vuklukano" << endl;
    }

    void display() const {
        cout << "Course " << courseName << " code " << courseCode << " credit " << credut << endl;
    }
};

#endif


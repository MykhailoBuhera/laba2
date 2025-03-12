#include "Course.h"

Course::Course(string name, string code, int cr) : courseName(name), courseCode(code), credut(cr) {}

Course::Course(Course&& other) noexcept
    : courseName(move(other.courseName)), courseCode(move(other.courseCode)), credut(other.credut) {
    cout << "Move constructor dla course " << courseName << " vuklukano" << endl;
}

Course::~Course() {
    cout << "destructor dla course " << courseName << " vuklukano" << endl;
}

void Course::display() const {
    cout << "Course " << courseName << " code " << courseCode << " credit " << credut << endl;
}
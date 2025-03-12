#include "Grade.h"

int Grade::count = 0;
//constructor
Grade::Grade(string sID, string cCode, int g) : studentID(sID), courseCode(cCode), grade(g) {
    ++count;
}
// copy constructor
Grade::Grade(const Grade& other) {
    studentID = other.studentID;
    courseCode = other.courseCode;
    grade = other.grade;
    ++count;
    cout << "Copy constructor dla Grade " << studentID << " vuklukano" << endl;
}
// Move constructor
Grade::Grade(Grade&& other) noexcept
    : studentID(move(other.studentID)),
    courseCode(move(other.courseCode)),
    grade(other.grade) {
    ++count;
    cout << "Move constructor dla Grade " << studentID << " vuklukano" << endl;
}

//destructor
Grade::~Grade() {
    cout << "Destructor dla ochinok " << studentID << " za kursom " << courseCode << " vyklykano" << endl;
    --count;
}
//otrum znach count
int Grade::getCount() {
    return count;
}
//func vuvid
void Grade::display() const {
    cout << "ID: " << studentID << " Cod course: " << courseCode << " Grade: " << grade << endl;
}
// unar oper
Grade& Grade::operator++() {
    ++grade;
    return *this;
}
//binar oper
Grade Grade::operator+(const Grade& other) const {
    return Grade(studentID, courseCode, grade + other.grade);
}
// perevantga oper vvid vuvid
ostream& operator<<(ostream& os, const Grade& grad) {
    os << grad.grade;
    return os;
}

istream& operator>>(istream& is, Grade& grad) {
    is >> grad.grade;
    return is;
}
#include "Student.h"

Student::Student() : name("nevidomo"), age(0), studentID("000000") {}

Student::Student(string n, int a, string id) : name(n), age(a), studentID(id) {}

Student::Student(string n, string id) : Student(n, 18, id) {}

Student::~Student() {
    cout << "destructor for name  " << name << " vuklukano" << endl;
}

void Student::display() const {
    cout << "imya " << name << " Age " << age << " ID " << studentID << endl;
}
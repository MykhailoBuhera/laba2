// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string studentID;

public:

    //constructor
    Student() : name("nevidomo"), age(0), studentID("000000") {}

    //parametru
    Student(string n, int a, string id) : name(n), age(a), studentID(id) {}

    //delaguvanya
    Student(string n, string id) : Student(n, 18, id) {}


    ~Student() {
        cout << "destructor dla name  " << name << " vuklukano" << endl;
    }

    void display() const {
        cout << "imya " << name << " Age " << age << " ID " << studentID << endl;
    }
};

#endif

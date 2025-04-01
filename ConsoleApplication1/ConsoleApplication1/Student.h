// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include <iostream>
#include <string>
using namespace std;

class Staff {
protected:
    string name;
    int age;
    int exp;

public:

    Staff() : name("Unknown"), age(0), exp(0) {}


    Staff(string n, int a,int exp) : name(n), age(a),exp(exp) {}
    //pure virtual
    virtual void func() = 0;
    // Віртуальний деструктор
    virtual ~Staff() {
        cout << "Destructor Staff for " << name << " called" << endl;
    }
    void dispexp () {
        cout << "Number of age " << exp << endl;
    }
    // Віртуальний метод для відображення інформації
    virtual void display() const {
        cout << "Name " << name << " Age " << age << endl;
    }
    
};


class Student : public Staff {
private:
    string studentID;
    Course course;
public:

    Student() : Staff("none", 0, 0), studentID("000000"), course("Ivan", "000",0) {}

    Student(string n, int a, int exp, string id, const Course& Scourse) : Staff(n, a, exp), studentID(id), course(Scourse) {}
    /*Student(string n, int a, int exp, string id, Course Scourse) : Staff(n, a,exp), studentID(id), course(Scourse) {}*/
    //delaguvanya
    /*Student(string n, string id) : Student(n, 18, id) {}*/

    ~Student() {
        cout << "Destructor Student for " << name << " called" << endl;
    }

    
    virtual void displayStudent () final {
        //Staff::display();
        cout << "Student ID " << studentID << " name " << name << " Age " << age << " info about ";
        course.display();
    }
    void func() override {
        cout << "hello world" << endl;
    };
};


class Professor : public Staff {
private:
    string subject;
public:
   
    Professor() : Staff("none", (0),(0)), subject("Unknown") {}

    Professor(string n, int a, string sub, int exp) : Staff(n, a , exp), subject(sub) {}

    ~Professor() {
        cout << "Destructor Professor for " << name << " called" << endl;
    }

    void func() override {
        cout << "hello world" << endl;
    }

    // Перевизначений метод display()
    void display() const override {
        Staff::display();
        cout << "Subject " << subject << endl;
    }
};

#endif

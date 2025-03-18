// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Staff {
protected:
    string name;
    int age;

public:

    Staff() : name("Unknown"), age(0) {}


    Staff(string n, int a) : name(n), age(a) {}

    // Віртуальний деструктор
    virtual ~Staff() {
        cout << "Destructor Staff for " << name << " called" << endl;
    }

    // Віртуальний метод для відображення інформації
    virtual void display() const {
        cout << "Name " << name << " Age " << age << endl;
    }
};


class Student : public Staff {
private:
    string studentID;

public:

    Student() : Staff(), studentID("000000") {}

    Student(string n, int a, string id) : Staff(n, a), studentID(id) {}
    //delaguvanya
    Student(string n, string id) : Student(n, 18, id) {}

    ~Student() {
        cout << "Destructor Student for " << name << " called" << endl;
    }

    // Перевизначений метод display()
    void display() const override {
        Staff::display();
        cout << "Student ID " << studentID << endl;
    }
};


class Professor : public Staff {
private:
    string subject;

public:
   
    Professor() : Staff(), subject("Unknown") {}

    Professor(string n, int a, string sub) : Staff(n, a), subject(sub) {}

    ~Professor() {
        cout << "Destructor Professor for " << name << " called" << endl;
    }

    // Перевизначений метод display()
    void display() const override {
        Staff::display();
        cout << "Subject " << subject << endl;
    }
};

#endif

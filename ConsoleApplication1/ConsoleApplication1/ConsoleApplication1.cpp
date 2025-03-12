// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Grade.h"
using namespace std;

int main() {
    Student student1("ivan", 18, "ch250605");
    student1.display();

    Grade grade1("ch250605", "CS143", 95);
    grade1.display();

    Grade grade2 = grade1;
    grade2++;
    grade2.display();

    Grade grade3 = grade1 + grade2;
    grade3.display();

    Course course1("Software Engineering", "CS143", 5);
    course1.display();

    Course course2 = move(course1);
    course2.display();

    cin >> grade1;
    cout << grade1 << endl;

    cout << "Number of Grade objects: " << Grade::getCount() << endl;

    return 0;
}





/*
#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Grade.h"
using namespace std;

int main() {
    // obj Student
    Student student1("ivan", 18, "ch250605");
    student1.display();
    cout << endl;

    // obj Grade
    Grade grade1("ch250605", "CS143", 95);
    grade1.display();
    cout << endl;

    Grade grade2 = grade1; // copy constructor
    grade2++;
    grade2.display();
    cout << endl;

    Grade grade3 = grade1 + grade2; // binar +
    grade3.display();
    cout << endl;

    // stvorenya Course
    Course course1("Software Engineering", "CS143", 5);
    course1.display();
    cout << endl;

    Course course2 = move(course1); // move const
    course2.display();
    cout << endl;

    // num of obj Grade
    cout << "Number of Grade objects: " << Grade::getCount() << endl;

    return 0;
}


        
        /*int main() {
            Student student1("ivan", 18, "ch250605");
            student1.display(); cout << endl;
        
            Grade grade1("ch250605", "CS143 ", 95);
            grade1.display(); cout << endl;
            Grade grade2 = grade1;
            // unar
            grade2++;
            grade2.display(); cout << endl;
        
            Grade grade3 = grade1 + grade2; // binar
            grade3.display(); cout << endl;
            grade1.display(); cout << endl;
        
     
        
            Course course1("Software Engineering", "CS143", 5);
            course1.display(); cout << endl;
        
            Course course2 = move(course1);
            course2.display(); cout << endl;
            cin >> grade1;
            cout << grade1 << endl;
        
            cout << "Number of objects " << Grade::getCount() << endl; //vuvedenya stitic num  :: This operator is essential for namespace management*/
            //and accessing class members in an unambiguous way, especially in large-scale projects where name conflicts might arise

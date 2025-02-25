// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
using namespace std;


class Student {//clas dla imya vik ta id
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
class Course {
private:
    string courseName;
    string courseCode;
    int credut;

public:

    Course(string name, string code, int cr) : courseName(name), courseCode(code), credut(cr) {}

    ~Course() {
        cout << "destructor dla course " << courseName << " vuklukano" << endl;
    }

    void display() const {
        cout << "Course " << courseName << " code " << courseCode << " credit " << credut << endl;
    }
};
// class ochinka
class Grade {
private:
    string studentID;
    string courseCode;
    int grade;

public:
    // counstrructor
    Grade(string sID, string cCode, int g) : studentID(sID), courseCode(cCode), grade(g) {}

    // destructor
    ~Grade() {
        cout << "destructor dla ochinok " << studentID << "za kursom " << courseCode << " vuklukano" << endl;
    }

    void display() const {
        cout << "ID  " << studentID << "Cod course " << courseCode << "Grade " << grade << endl;
    }
};



    int main()
    {
        Student student1("ivan", 18, "ch250605");
        student1.display();

        Course course1("Software engennering", "CS143", 5);
        course1.display();

        Grade grade1("ch250605", "CS143", 95);
        grade1.display();

        return 0;

    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

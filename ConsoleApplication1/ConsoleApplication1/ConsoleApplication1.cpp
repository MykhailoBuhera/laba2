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
    int main(){
    
    
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

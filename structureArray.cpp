// structureArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Structure definition
struct Student {
    int id;
    string name;
    float grade1;
    float grade2;
    float total;
    float average;
};


// function prototype
void myLine(int n);

int main() {
   // Student s, s1, s2,s3,;//s is a variable name which is of Student data type
    ////int price // price variable is of an integer type
    Student s[5];

    ////Processing Student s
    //s.id = 101; //use the dot operator to access the members of the structure
    //s.name = "Ryan";
    //s.grade1 = 99;
    //s.grade2 = 88;
    //s.total = s.grade1 + s.grade2;
    //s.average = s.total / 2;
    ////  \n is an escape sequence to break a line, similar to endl
    //// \t is to give a tab space
    //cout << "\nThe id of the student: " << s.id ;
    //cout << "\nThe name of the student: " << s.name;
    //cout << "\nGrade1 = " << s.grade1;
    //cout << "\nGrade2 = " << s.grade2;
    //cout << "\nThe total = " << s.total;
    //cout << "\nThe average = " << s.average;
    //myLine(50);

    //Processing Student s1
    int i;
    for (i = 0; i < 2; i++) {
        //s[i].id = 102; //use the dot operator to access the members of the structure
        //s[i].name = "Shirley";
        //s[i].grade1 = 65;
        //s[i].grade2 = 78;
        cout << "\nEnter the id: ";
        cin >> s[i].id;
        cout << "\nEnter the name: ";
        cin >> s[i].name;
        cout << "\nEnter the grade1: ";
        cin >> s[i].grade1;
        cout << "\nEnter the grade2: ";
        cin >> s[i].grade2;
        s[i].total = s[i].grade1 + s[i].grade2;
        s[i].average = s[i].total / 2;
        //  \n is an escape sequence to break a line, similar to endl
        // \t is to give a tab space
        cout << "\nThe id of the student: " << s[i].id;
        cout << "\nThe name of the student: " << s[i].name;
        cout << "\nGrade1 = " << s[i].grade1;
        cout << "\nGrade2 = " << s[i].grade2;
        cout << "\nThe total = " << s[i].total;
        cout << "\nThe average = " << s[i].average;
        myLine(50);
    }
}
//functions

void myLine(int n) {
    int i;
    cout << "\n";
    for (i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";
}
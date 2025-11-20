#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int age);
    void display() const;
private:
    std::string name;
    int age;
};
#endif // STUDENT_H
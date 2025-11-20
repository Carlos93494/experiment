#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int age);
    void display() const;
    void setName(const std::string& name) {
        this->name = name;
    }
    void setAge(int age) { this->age = age; }
    std::string getName() const { return name; }
    int getAge() const { return age; }

private:
    std::string name;
    int age;
};
#endif // STUDENT_H
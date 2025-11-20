#include "student.h"
#include <iostream>

Student::Student(const std::string& name, int age) : name(name), age(age) {}
void Student::display() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}


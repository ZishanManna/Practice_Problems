#include <iostream>
#include <string>
using namespace std;

// Base Person class with public name and age attributes
class Person {
public:
    // Constructor to initialize name and age
    Person(string person_name, int person_age) {
        name = person_name;
        age = person_age;
    }

    // Function to print information about the person
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Public attributes for easy access
    string name;
    int age;
};

// Derived Student class inheriting from Person
class Student : public Person {
public:
    // Constructor to initialize name, age, and department
    Student(string student_name, int student_age, string student_department)
        : Person(student_name, student_age) {  // Call Person's constructor
        department = student_department;
    }

    // Method to print name, age, and department of the student
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << ", Department: " << department << endl;
    }

    // Public attribute for easy access
    string department;
};

int main() {
    // Create an instance of the Student class
    Student student1("Charlie", 20, "Computer Science");

    // Call print_info() on the Student instance
    student1.print_info();

    return 0;
}

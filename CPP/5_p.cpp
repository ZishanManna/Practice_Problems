#include <iostream>
#include <string>
using namespace std;

// Base Person class
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

// Derived Teacher class inheriting from Person
class Teacher : public Person {
public:
    // Constructor to initialize name, age, and salary
    Teacher(string teacher_name, int teacher_age, double teacher_salary)
        : Person(teacher_name, teacher_age) {  // Call Person's constructor
        salary = teacher_salary;
    }

    // Method to print name, age, and salary of the teacher
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }

    // Public attribute for easy access
    double salary;
};

int main() {
    // Create an instance of the Teacher class
    Teacher teacher1("Asha", 50, 50000);

    // Call print_info() on the Teacher instance
    teacher1.print_info();

    return 0;
}

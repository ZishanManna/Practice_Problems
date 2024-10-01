#include <iostream>
#include <string>
using namespace std;

// Define the Person class with public name and age attributes
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
    //Public attributes
    string name;
    int age;
};

int main() {
    // Create two instances of the Person class
    Person person1("Alice", 30);
    Person person2("Bob", 45);

    // Call print_info() on each instance
    person1.print_info();
    person2.print_info();

    return 0;
}

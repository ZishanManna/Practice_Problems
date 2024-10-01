#include <iostream>
#include <string>
using namespace std;

// Define the Person class with name and age attributes
class Person {
private:
    // Constructor to initialize name and age
    Person(string person_name, int person_age) {
      name = person_name;
      age = person_age;
    }

    // Function to print information about the person
    void print_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

private:
    string name;  // Name attribute
    int age;      // Age attribute
};

int main() {
    // Creating instances of the Person class
    Person person1("Alice", 30);
    Person person2("Bob", 45);

    // Printing information for both instances
    person1.print_info();
    person2.print_info();

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

// Define the Person class with name and age attributes
class Person {
public:
    Person(string name, int age) : name(name), age(age) {}

private:
    string name;  // Name attribute
    int age;      // Age attribute
};

int main() {
    // Creating instances of the Person class
    Person person1("Alice", 30);
    return 0;
}

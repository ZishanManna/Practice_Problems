# Inheritance and Classes in C++
This problems demonstrates the use of inheritance and classes in C++ by creating a series of classes (Person, Student, and Teacher) and performing operations on their objects. 


## Problem Descriptions
### P1: Define a Person Class
- Define a Person class with name and age attributes.
- Create two instances of Person and call print_info() on them.

### P2: Make Attributes Private
- Modify the Person class to make the name and age attributes private.
- Attempt to access them from outside the class to see if it's possible.

### P3: Create a Student Class
- Add a class called Student that inherits from Person.
- Add a field called department.
- Add a constructor that takes name, age, and department as parameters.
- Add a method called print_info() that prints out the name, age, and department of the student.
- Create an instance of Student and call print_info() on it.

### P4: Create a Teacher Class
- Create a class called Teacher that inherits from Person.
- Add a field called salary.
- Add a constructor that takes name, age, and salary as parameters.
- Add a method called print_info() that prints out the name, age, and salary of the teacher.
- Create an instance of Teacher and call print_info() on it.

## How to Compile and Run
### Compile the Code:
```bash
g++ -o main main.cpp
```
### Run the Executable:
```bash
./main
```

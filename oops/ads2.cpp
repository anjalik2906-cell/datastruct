#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called" << endl;
    }

    // Function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1("Anjali", 19);

    s1.display();

    return 0;
}
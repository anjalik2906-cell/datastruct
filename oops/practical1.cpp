#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
    int rollno;
    float marks;
    char name[20];

public:
    void getinfo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Marks: ";
        cin >> marks;

        cin.ignore();

        cout << "Enter Name: ";
        cin.getline(name, 20);
    }

    void displayinfo()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    student s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getinfo();
    }

    cout << "\nStudent Record\n";
    cout << "========================\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].displayinfo();
    }

    return 0;
}
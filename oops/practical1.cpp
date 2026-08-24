#include <iostream>
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

        cout << "Enter Name: ";
        cin >> ws;
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

    cout << "\n========== Student Record ==========\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].displayinfo();
    }

    return 0;
}
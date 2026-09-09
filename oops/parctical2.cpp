#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    char name[30];
    float monthlySalary;
    char department[30];

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayData()
    {
        float annualSalary;
        float tax;
        float otherDeduction;
        float netAnnualSalary;

        annualSalary = monthlySalary * 12;
        tax = annualSalary * 0.10;
        otherDeduction = annualSalary * 0.05;
        netAnnualSalary = annualSalary - tax - otherDeduction;

        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
        cout << "\nMonthly Salary: " << monthlySalary;
        cout << "\nAnnual Salary: " << annualSalary;
        cout << "\nTax (10%): " << tax;
        cout << "\nOther Deduction (5%): " << otherDeduction;
        cout << "\nNet Annual Salary: " << netAnnualSalary;
        cout << "\n-----------------------------";
    }
};

int main()
{
    Employee e[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        e[i].getData();
    }

    cout << "\n\nEmployee Details\n";
    cout << "=============================";

    for (int i = 0; i < 5; i++)
    {
        e[i].displayData();
    }

    return 0;
}
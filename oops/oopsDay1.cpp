#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int rollNo;
    string name;
    void display(){
        cout<<"studemt name is "<<name<<endl;
        cout<<"studemt roll number is "<<rollNo<<endl;
    }

};
int main(){
    student s1;
    s1.rollNo = 1;
    s1.name = "John";
    s1.display();
    return 0;
}
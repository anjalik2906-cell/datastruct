#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int rollNo;
    float marks;
    char name[20];
    public:
    //function to take student information
    void getInfo(){
        cout<<"Enter student roll number: ";
        cin>>rollNo;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student marks: ";
        cin>>marks;
        //removes the enter key from the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

}
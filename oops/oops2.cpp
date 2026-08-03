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
        
        cout<<"Enter student marks: ";
        cin>>marks;
        //removes the enter key from the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter student name: ";
        cin>>name;
        cin.getline(name, 50);
    }
    void displayInfo(){
        cout<<left<<setw(10)<<"Roll No"<<setw(10)<<"Marks"<<setw(20)<<"Name"<<endl;
    }

};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student* students = new Student[n];
    for(int i=0; i<n; i++){
        cout<<"Enter information for student "<<i+1<<endl;
        students[i].getInfo();
    }
    cout<<endl<<"Student Information:"<<endl;
    cout<<left<<setw(10)<<"Roll No"<<setw(10)<<"Marks"<<setw(20)<<"Name"<<endl;
    for(int i=0; i<n; i++){
        students[i].displayInfo();
    }
    delete[] students;
    return 0;
}
#include<iostream>
using namespace std;
class Stack{
    int arr[1000];
    int top;

public:
Stack(){
    top=-1;


    void push(int x);
    {
    if(top==999){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
    cout<<x<<" pushed into stack"<<endl;
}

    void pop(int x){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        cout<<arr[top]<<" popped from stack"<<endl;
        top--;
    }
    
}
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop(30);
    return 0;

}




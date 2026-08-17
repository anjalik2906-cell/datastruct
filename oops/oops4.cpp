// #include<iostream>
// using namespace std;

// int main(){
//     auto count =5;
//     auto price =49.75;
//     auto grade ='A';
//     auto ready=true;


//     // const int limit=100;
//     // auto copy =limit;
//     // const auto fixed =limit;
//     // copy=120;
#include<bits/stdc++.h>
using namespace std;
 void callByValue(int x){
    x=20;
    cout<<"Inside call by value function: "<<x<<endl;
 }
 int main(){
    int num=10;
    cout<<"Before calling function: "<<num<<endl;
    callByValue(num);
    cout<<"After calling function: "<<num<<endl;
    return 0;
 }
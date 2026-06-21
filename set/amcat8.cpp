#include<iostream>
using namespace std;
int multiply(int a, int b, int c){
    if(a<=b&& a<=c){
        return b*c;
    }
    if(b<=a&& b<=c){
        return a*c;
    }
    if(c<=a&& c<=b){
        return a*b;
    }
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<multiply(a,b,c);
    return 0;
}
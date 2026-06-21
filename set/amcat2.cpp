#include<iostream>
using namespace std;
int main() {
    string stringSent, stringRec;
    cin>>stringSent;
    cin>>stringRec;
    char ans=0;
    for(char ch:stringSent){
        ans^= ch;

    }
    for(char ch:stringRec){
        ans^= ch;
    }
    cout<<ans;
    return 0;
}

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s={1,2,3,4};
    s.insert(5);
    s.insert(10);
    s.insert(15);
    for(const auto& elem : s){
        cout << elem << " "<<endl;
    }
    if(s.find(10) != s.end()){
        cout <<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}
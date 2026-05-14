#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    for(const auto& elem : s){
        cout << elem << " ";
    }
    return 0;
}

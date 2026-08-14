#include<iostream>
using namespace std;
//empty function and callled at last
void print(){
    cout<<"no more empty function and";
    cout<<"I am called at last"<<endl;
    template<typename T, typename... Types>
    void print(T var1, Types... var2){
        cout<<var1<<endl;
        print(var2...);
    }
}
int main(){
    print(1,2.5,"hello", 'a');
    return 0;
}
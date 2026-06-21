#include<iostream>
using namespace std;
void drawPattern(int num){
    for(int i=0; i<num; i++){
        for(int j=0; j<2*i; j++){
            cout<<1;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    drawPattern(n);
    return 0;

}
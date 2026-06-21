#include<iostream>
using namespace std;
int elementCount(int size,  int sameElement[]){
    int count=0;
    for(int i=0;i<size; i++){
        if(sameElement[i] == sameElement[0]){
            count ++;
        }
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    int sameElement[n];
    for(int i=0; i<n; i++){
        cin>>sameElement[i];

    }
    cout<<elementCount(n, sameElement);
    return 0;
}
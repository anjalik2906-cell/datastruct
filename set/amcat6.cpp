#include<iostream>
#include<vector>
using namespace std;
void manchester(int len, vector<int>arr){
    int prev=0;
    for(int i=0; i<len; i++){
        if(arr[i] ==prev){
            cout<<0<<" ";


        }
        else{
            cout<<1<<" ";
        }
        prev=arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    manchester(n, arr);
    return 0;
}
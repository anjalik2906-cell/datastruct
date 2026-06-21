#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    queue<int>q;
    for(int i=0; i<k; i++){
        if (arr[i]<0){
        q.push(i);
        }
    }
    if(q.empty()){
        cout<<0;
    }
    else{
        cout<<arr[q.front()];
    }
    for(int i=k; i<n; i++){
        while(!q.empty() && q.front() <= i-k)
        q.pop();
    
    if(arr[i]<0){
        q.push(i);
    }
}
    cout<<" ";
    if (q.empty()){
        cout<<0;
    }
    else
    cout<<arr[q.front()];
    
    
    return 0;

}
#include<iostream>
#include<algorithm>
using namespace std;
int input_list(int size, int arr[]){
    sort(arr, arr + size);
    if(size/2==1){
        return arr[size/2];

    }
    else{
        return(arr[size/2] + arr[size/2-1])/2;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<input_list(n,arr);
    return 0;
}
#include<iostream>
using namespace std;

    
int countOccurences(int len, int value, int arr[]){
        int count =0;
        for(int i=0; i<len; i++){
            if(arr[i] == value){
                count ++;
            }
        }
    
        return count;
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];

        }
        int k;
        cin>>k;
        int count=countOccurences(n,k,arr);
        cout<<count;
        return 0;
    }
    
    


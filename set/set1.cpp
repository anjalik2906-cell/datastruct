// #include<iostream>
// #include<set>
// using namespace std;
// //addition of numbers using set

// int main() {
//     set<int> s;
//     int a, b;

//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter second number: ";
//     cin >> b;

//     s.insert(a);
//     s.insert(b);

//     cout << "Addition = " << a + b;

//     return 0;
// }
#include <iostream>
#include <set>
#include <numeric>
using namespace std;
int main(){
    set<int> a;
    int n;
    cout<<"enter size of set: "<<endl;
    cin>>n;
     cout<<"enter element: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    int sum = accumulate(a.begin(),a.end(),0);
    cout<<"sum of all set: "<<sum<<endl;

    }
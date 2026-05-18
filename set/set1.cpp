#include<iostream>
#include<set>
using namespace std;
//addition of numbers using set

int main() {
    set<int> s;
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    s.insert(a);
    s.insert(b);

    cout << "Addition = " << a + b;

    return 0;
}

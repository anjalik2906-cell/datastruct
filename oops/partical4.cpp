#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 10, b = 10, c = 10;

    // Call by Value
    cout << "Before call by value: " << a << endl;
    callByValue(a);
    cout << "After call by value: " << a << endl;

    // Call by Reference
    cout << "\nBefore call by reference: " << b << endl;
    callByReference(b);
    cout << "After call by reference: " << b << endl;

    // Call by Address
    cout << "\nBefore call by address: " << c << endl;
    callByAddress(&c);
    cout << "After call by address: " << c << endl;

    return 0;
}
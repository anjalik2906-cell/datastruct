//sort on the basis of absolute value
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

bool compare(int a, int b) {
    return abs(a) > abs(b);   // descending order of absolute value
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {3, 4, 5, 6};

    set<int> unionSet;

    // Insert elements of set1
    for (int x : set1) {
        unionSet.insert(x);
    }

    // Insert elements of set2
    for (int x : set2) {
        unionSet.insert(x);
    }

    cout << "Union of sets: ";

    for (int x : unionSet) {
        cout << x << " ";
    }

    return 0;
}
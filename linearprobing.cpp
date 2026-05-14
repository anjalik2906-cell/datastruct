#include<iostream>
using namespace std;
/*
1-->start
2--> intialise hash table
3--->take key to insert
4-->index=key%size
5--->if hashtable[index] if empty
insert the key at hashtable[index]
6--->else(collision occurs)
repeat
index=(index+1)%size
*/

const int SIZE = 10;
int hashTable[SIZE];

// Initialize table
void initialize() {
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert using Linear Probing
void insert(int key) {
    int index = hashFunction(key);

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

// Display table
void display() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << " --> ";
        if (hashTable[i] == -1)
            cout << "Empty";
        else
            cout << hashTable[i];
        cout << endl;
    }
}

int main() {
    initialize();

    insert(23);
    insert(33);
    insert(43);
    insert(13);

    display();

    return 0;
}

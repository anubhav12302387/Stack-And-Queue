#include <iostream>
using namespace std;

void readKeys(int keys[], int numKeys) {
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }
}

void initializeHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }
}

void insertKey(int hashTable[], int tableSize, int key) {
    int hashIndex = key % tableSize; 
    int j = 0;

    
    while (hashTable[hashIndex] != -1) {
        hashIndex = (hashIndex + 1) % tableSize; 
        j++;
        if (j == tableSize) {
            cout << "Hash table is full. Cannot insert key " << key << endl;
            return;
        }
    }
    hashTable[hashIndex] = key; 
}


void printHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << hashTable[i] << " ";
        } else {
            cout << "-1 ";
        }
    }
    cout << endl;
}

int main() {
    int tableSize, numKeys;

  
    cout << "Enter the size of the hash table: ";
    cin >> tableSize;

    cout << "Enter the number of keys: ";
    cin >> numKeys;

    int keys[numKeys];
    int hashTable[tableSize];

    
    initializeHashTable(hashTable, tableSize);

    
    cout << "Enter the keys: ";
    readKeys(keys, numKeys);

    for (int i = 0; i < numKeys; i++) {
        insertKey(hashTable, tableSize, keys[i]);
    }

    cout << "Hash table contents: ";
    printHashTable(hashTable, tableSize);

    return 0;
}

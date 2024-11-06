#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minheapify(int heap[], int size, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < size && heap[left] < heap[smallest]) {
        smallest = left;
    }
    if (right < size && heap[right] < heap[smallest]) {
        smallest = right;
    }
    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minheapify(heap, size, smallest);
    }
}

void deleteroot(int heap[], int &size){
    if (size <= 0) {
        cout << "Heap is empty" << endl;
        return;
    }
    if (size == 1) {
        size--;
        return;
    }
    heap[0] = heap[size - 1];
    size--;
    minheapify(heap, size, 0);
}


void printminheap(int heap[], int size) {
    cout << "Min Heap: ";
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    
    cout << "Enter the number of elements in the heap: ";
    cin >> size;

    int heap[size];
    cout << "Enter the elements of the heap:\n";
    for (int i = 0; i < size; i++) {
        cin >> heap[i];
    }

    for (int i = (size / 2) - 1; i >= 0; i--) {
        minheapify(heap, size, i);
    }

    cout << "Initial ";
    printminheap(heap, size); 

    deleteroot(heap, size); 

    cout << "After deleting the root ";
    printminheap(heap, size); 

    return 0;
}

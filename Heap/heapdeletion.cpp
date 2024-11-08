#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minheapify(int heap[], int size, int i) {
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

void deleteroot(int heap[], int &size) {
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

int main() {
    int heap[] = {3, 5, 9, 6, 8, 20, 10, 12, 18, 9};
    int size = sizeof(heap) / sizeof(heap[0]);

    // Delete the root element
    deleteroot(heap, size);

    cout << "Heap after deleting root: ";
    for (int i = 0; i < size; ++i) {
        cout << heap[i] << " ";
    }
    cout << endl;

    return 0;
}

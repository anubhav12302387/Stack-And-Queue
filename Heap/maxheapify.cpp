#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxheapify(int heap[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[largest]) {
        largest = left;
    }

    if (right < size && heap[right] < heap[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        maxheapify(heap, size, largest);
    }
}

void buildMaxHeap(int heap[], int size){
    for(int i= (size/2)- 1; i>=0;i--){
        maxheapify(heap, size, i);
    }
}

void heapsort(int heap[], int size){
    buildMaxHeap(heap, size);
    for(int i=size-1; i > 0; i--){
        swap(&heap[0], &heap[i]);
        maxheapify(heap,i,0);
    }
}


void printheap(int heap[], int size) {
    cout << "Heap Elements after deleting root: ";
    for (int i = 0; i < size; ++i) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements in the heap: ";
    cin >> size;

    int heap[100];
    cout << "Enter the elements of the heap: ";
    for (int i = 0; i < size; ++i) {
        cin >> heap[i];
    }

    
    heapsort(heap, size);

    
    printheap(heap, size);

    return 0;
}

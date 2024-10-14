#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void conquer(int arr[], int l, int m, int r, int size) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }

    printArray(arr, size);
}

void divide(int arr[], int l, int r, int size, int* iteration) {
    if (l < r) {
        int m = l + (r - l) / 2;

        divide(arr, l, m, size, iteration);
        divide(arr, m + 1, r, size, iteration);

        printf("After iteration %d\n", ++(*iteration));
        conquer(arr, l, m, r, size);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Given Array\n");
    printArray(arr, n);

    int iteration = 0;
    divide(arr, 0, n - 1, n, &iteration);

    printf("Sorted Array\n");
    printArray(arr, n);

    return 0;
}

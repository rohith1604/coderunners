#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int rootIndex) {
    int largest = rootIndex;   
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;

    if (largest != rootIndex) {
        swap(&arr[rootIndex], &arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
    clock_t start = clock();
    heapSort(arr, n);
    clock_t end = clock();

    double timeTaken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nTime taken: %lf seconds\n", timeTaken);
    free(arr);

    return 0;
}

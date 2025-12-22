#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayArray(int *arr, int size);
void swap(int *a, int *b);
int ascending(int a, int b);
int descending(int a, int b);
void bubbleSort(int *arr, int size, int (*compare)(int, int));

int main(void) {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ");
        scanf("%d", arr + i);   
    }

    int order = 0;
    printf("Enter 1 to sort in ascending order, 2 to sort in descending order: ");
    scanf("%d", &order);

    printf("\nData items in original order:\n");
    displayArray(arr, size);

    if (order == 1) {
        bubbleSort(arr, size, ascending);
        printf("\nData items in ascending order:\n");
    } else {
        bubbleSort(arr, size, descending);
        printf("\nData items in descending order:\n");
    }

    displayArray(arr, size);

    free(arr); 
    return 0;
}

void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i)); 
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ascending(int a, int b) {
    return b < a; 
}

int descending(int a, int b) {
    return b > a; 
}

void bubbleSort(int *arr, int size, int (*compare)(int, int)) {
    for (int pass = 1; pass < size; pass++) {
        for (int i = 0; i < size - 1; i++) {
            if (compare(*(arr + i), *(arr + i + 1))) {
                swap(arr + i, arr + i + 1); 
            }
        }
    }
}

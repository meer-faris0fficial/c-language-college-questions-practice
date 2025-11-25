#include <stdio.h>

int deleteElement(int arr[], int size, int num, int elementToInsert);
int insertElement(int arr[], int size, int pos, int num);
int appendArray(int arr[], int size, int arrToAppend[], int sizeToAppend);

int deleteElement(int arr[], int size, int num, int elementToInsert) {
    int i, pos = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element %d not found!\n", num);
        printf("And the appending of element cannot occour at the deleted position!\n");
        return size; 
    }

    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; 
    printf("Array after deleting %d: ", num);
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    if (pos != -1)
        size = insertElement(arr, size, pos, elementToInsert);

    return size; 
}

int insertElement(int arr[], int size, int pos, int num) {
    int i;
    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    size++;

    printf("Array after inserting %d at position %d: ", num, pos);
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return size; 
}

int appendArray(int arr[], int size, int arrToAppend[], int sizeToAppend) {
    int i;
    for (i = 0; i < sizeToAppend; i++) {
        arr[size + i] = arrToAppend[i];
    }
    size += sizeToAppend;

    printf("Array after appending another array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return size;
}

int main() {
    int arr[20] = {1, 2, 3, 4, 5};  
    int arrToAppend[] = {7, 8, 9, 10};
    int size = 5;  

    int elementToDelete, elementToInsert;

    printf("Enter the element you want to delete: ");
    scanf("%d", &elementToDelete);

    printf("Enter the element you want to insert at deleted position: ");
    scanf("%d", &elementToInsert);

    size = deleteElement(arr, size, elementToDelete, elementToInsert);
    appendArray(arr, size, arrToAppend, sizeof(arrToAppend)/sizeof(arrToAppend[0]));

    return 0;
}

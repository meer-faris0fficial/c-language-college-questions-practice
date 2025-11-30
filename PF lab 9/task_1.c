#include <stdio.h>

int binarySearch(int arr[], int size, int find) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == find)
            return mid;      
        else if (arr[mid] < find)
            low = mid + 1;   
        else
            high = mid - 1;  
    }
    return -1; 
}

int main() {
   int noStu = 0;
    printf("Enter the no of students: ");
    scanf("%d", &noStu);

    int rollNo[noStu];
    for (size_t i = 0; i < noStu; i++){
        printf("Enter the student %d roll no: ", i + 1);
        scanf("%d", &rollNo[i]);
    }

    printf("\n");
    int marks[noStu];
    for (size_t i = 0; i < noStu; i++){
        printf("Enter the marks of roll no %d: ", rollNo[i]);
        scanf("%d", &marks[i]);
    }
    
    int find = 0;
    printf("Enter the roll no student of which you want to find numbers: ");
    scanf("%d", &find);

    int pos = binarySearch(rollNo, noStu, find);

    if (pos != -1)
        printf("The marks of %d roll no is: %d\n", find, marks[pos]);
    else
        printf("Roll %d not found.\n", find);

    return 0;
}

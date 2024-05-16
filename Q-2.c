//Q-2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

void cubeElements(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int *currentElement = (*(arr + i) + j);
            *currentElement = (*currentElement) * (*currentElement) * (*currentElement);
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the 2D array: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter %d elements for the 2D array:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements((int *)arr, rows, cols);

    printf("Cubes of elements in the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

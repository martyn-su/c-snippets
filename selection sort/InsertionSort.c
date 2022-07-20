// Insertion sort Algorithm

#include "stdio.h"

int main()
{

    int data[] = {1, 5, 89, 44, 22, 4, 2, 78, 34, 33};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    printf("Printing the array in ascending order: \n");
    printArray(data, size);
}

void insertionSort(int *array, int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        // comparing key with elements
        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}

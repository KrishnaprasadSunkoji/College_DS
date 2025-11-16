#include <stdio.h>

void insertionSort( int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while ( j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        } 
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5] = {5, 2, 4, 6, 1};
    int n = 5;
    insertionSort(arr, n);
    for (int i = 0; i < n ; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
    return 0;
}
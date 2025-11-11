#include <stdio.h>

void selectionSort(int n, int arr[]);
void printArray(int n, int arr[]);

int main(void)
{
    int size;
    printf("\nSELECTION SORT\nSize: ");
    scanf("%i", &size);
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%i", &numbers[i]);
    }
    printf("\nUNSORTED\n");
    printArray(size, numbers);
    selectionSort(size, numbers);
    printf("\nSORTED\n");
    printArray(size, numbers);
    return 0;
}

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%i  ",arr[i]);
    }
    printf("\n");
}
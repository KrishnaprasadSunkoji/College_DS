#include <stdio.h>

void mergeSort(int start, int end, int arr[]);
void merge(int start, int mid, int end, int arr[]);
void printArray(int n, int arr[]);
void inputArray(int n, int arr[]);

int main(void)
{
    int size;
    printf("\nMERGE SORT\nSize:");
    scanf("%i", &size);
    int numbers[size];
    inputArray(size, numbers); // adds elements in numbers
    mergeSort(0, size - 1, numbers); 
    printf("\nSORTED:\n");
    printArray(size, numbers);
    return 0;
}

void mergeSort(int start, int end, int arr[])
{
    if (start < end)
    {

        int mid = start + (end - start) / 2;

        mergeSort(start, mid, arr);   // left 
        mergeSort(mid + 1, end, arr); // right

        merge(start, mid, end, arr); // mergeback
    }
}

void merge(int start, int mid, int end, int arr[])
{
    int size = end - start + 1; //calc size
    int temp_arr[size]; 
    int i = start, j = mid + 1, k = 0; //k is for tracking index in temp arr.

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp_arr[k++] = arr[i++];
            /*
                temp_arr[k++] == arr[i++]; is same as
                temp_arr[k] == arr[i];
                k++;
                i++;
                uses the current val of k and i then increment.
            */
        }
        else
        {
            temp_arr[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp_arr[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp_arr[k++] = arr[j++];
    }

    for (int index = 0; index < size; index++)
    {
        arr[index + start] = temp_arr[index];
    }
}

//arr I/O.
void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%i  ", arr[i]);
    }
    printf("\n");
}

void inputArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
}

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    printf("\nBUBBLE SORT\nSize: ");
    //size
    scanf("%i", &n);
    int numbers[n] = {};
    //inputs
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&numbers[i]);
    }
    printf("\nUNSORTED\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i  ", numbers[i]);
    }
    printf("\n");

    //sorting..
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    printf("\nSORTED\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i  ",numbers[i]);
    }
    printf("\n");
    return 0;
}

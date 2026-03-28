#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    int i, j, next;

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d --> %d\n", arr[i], next);
    }

    return 0;
}
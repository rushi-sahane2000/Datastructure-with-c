#include<stdio.h>

int display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    int size = 6;
    // int size=sizeof(arr)/sizeof(int);
    display(arr, size);

    return 0;
}
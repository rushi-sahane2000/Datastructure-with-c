#include <stdio.h>

int display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// linear search
/*int linearsearch(int arr[], int element,int size)
{
    for (int  i = 0; i<size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }

    }
    return -1;
*/

// Binary search
int binarysearch(int arr[], int element, int size)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // int arr[]={1,3,4,5,6,7,65,67,878,87,55,44,335,566,777};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int), element = 7;
    // display(arr, size);
    // int searchindex= linearsearch(arr,element,size);
    // printf("The element search is %d is found  at index %d",element,searchindex );
    int searchindex = binarysearch(arr, element, size);
    printf("the element %d is at index %d", element, searchindex);

    return 0;
}
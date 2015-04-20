/*
 * Rotate an array of n elements to the right by k steps.
 *
 * For example, with n = 7 and k = 3, the array 
 * [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
 */


#include<stdio.h>

void reverse(int* a, int* b)
{
    while (--b > a) {
        *b ^= *a;
        *a ^= *b;
        *b ^= *a;
        ++a;
    }
}
void rotate(int *arr, int s_arr, int by)
{
    by = by % s_arr;
    reverse(arr, arr+s_arr);
    reverse(arr, arr+by);
    reverse(arr+by, arr+s_arr);
}

int main()
{
    int arr[] = {1,2,3};
    rotate(arr, 3, 1);
    printArray(arr, 3);
    return 0;
}
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

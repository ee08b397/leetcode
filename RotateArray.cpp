#include<stdio.h>

void printArray(int arr[], int size);

int gcd(int a,int b);
void rotate(int arr[], int n, int d)
{
    if (n <= d)
        d = n - 1;

    int i, j, k, temp;
    for (i = 0; i < gcd(d, n); i++)
    {
        temp = arr[i];
        j = i;
        while(1)
        {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    //int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int arr[] = {1,2,3};
    int arr[] = {1,2};
    rotate(arr, 2, 1);
    printArray(arr, 2);
    return 0;
}

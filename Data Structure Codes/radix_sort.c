#include <stdio.h>
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int arr[100], n;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the element of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    radixsort(arr, n);
    printf("Array after sorting\n");
    print(arr, n);
    return 0;
}

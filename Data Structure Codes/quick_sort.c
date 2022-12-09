#include <stdio.h>
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int part(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return i + 1;
}
void quick(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = part(a, low, high);
        quick(a, low, pi - 1);
        quick(a, pi + 1, high);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quick(a, 0, n - 1);
    printf("The array after sorting is\n");
    print(a, n);
    return 0;
}
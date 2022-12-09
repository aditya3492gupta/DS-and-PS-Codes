#include <stdio.h>
void merge(int a[], int l, int mid, int r)
{
    int i = l, j = mid + 1, k = l, z = l + r;
    int temp[z];
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    int p;
    for (p = l; p <= r; p++)
        a[p] = temp[p];
}
void mergeSort(int a[], int l, int r)
{
    int n = l + r;
    int mid = (int)(l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
    printf("The array after sorting\n");
    print(a, n);
}
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d\n", a[i]);
}
int main()
{
    int n;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the element of the array\n");
    int i, a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mergeSort(a, 0, n - 1);

    return 0;
}
#include <stdio.h>
#include <string.h>
#define RANGE 255
void countSort(int arr[], int n)
{
	int output[n];
	int range = RANGE + 1;
	int count[range], i;
	for (i = 0; arr[i]; ++i)
		++count[arr[i]];
	printf("loop");
	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i - 1];
	for (i = 0; arr[i]; ++i)
	{
		output[count[arr[i]] - 1] = arr[i];
		--count[arr[i]];
	}
	for (i = 0; arr[i]; ++i)
		arr[i] = output[i];
	printf("56");
}
void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
}
int main()
{
	int n;
	printf("Enter the number of element\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the array\n");
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("87");
	countSort(arr, n);
	printf("98");
	printf("Sorted array is\n");
	print(arr, n);
	return 0;
}
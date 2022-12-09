#include <stdio.h>
#include <stdlib.h>
void indexedSequentialSearch(int arr[], int n, int k)
{
	int GN = 3;
	int elements[GN], indices[GN], i, set = 0;
	int j = 0, ind = 0, start, end;
	for (i = 0; i < n; i += 3)
	{
		// storing the element of the first index of each group
		elements[ind] = arr[i];
		indices[ind] = i;
		ind++;
	}
	if (k < elements[0])
	{
		printf("Not found");
		exit(0);
	}
	else if (k > elements[n - 1])
	{
		printf("Element not found");
		exit(0);
	}

	else
	{
		for (i = 1; i <= ind; i++)
			if (k <= elements[i])
			{
				start = indices[i - 1];
				end = indices[i];
				set = 1;
				break;
			}
	}
	if (set == 0)
	{
		start = indices[GN - 1];
		end = GN;
	}
	for (i = start; i <= end; i++)
	{
		if (k == arr[i])
		{
			j = 1;
			break;
		}
	}
	if (j == 1)
		printf("Found at index %d", i);
	else
		printf("Not found");
}
void main()
{

	int i, a[100], ele, n;
	printf("Enter the number of element\n");
	scanf("%d", &n);
	printf("Enter the elements of the sorted array\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d", &ele);
	indexedSequentialSearch(a, n, ele);
}

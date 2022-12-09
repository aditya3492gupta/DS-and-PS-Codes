#include <stdio.h>
int linear(int a[], int n, int ele)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == ele)
			return i;
	return 0;
}
int main()
{
    int n,a[100],i,ele;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be found\n");
    scanf("%d",&ele);
	int result = linear(a, n, ele);
	if(result==0)
    printf("Element not found");
    else 
    printf("Element found at index %d",result);
	return 0;
}

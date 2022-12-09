#include <stdio.h>
int binary(int a[], int ele,int l,int r){
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ele==a[mid])
        return mid;
        else if(ele>a[mid])
        return binary(a,ele,mid+1,r);
        else if(ele<a[mid])
        return binary(a,ele,l,mid-1);
    }
    return 0;    }
int main(){
    int n,a[100],ele,i;
    printf("Enter the number of elemnets\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    
    int result = binary(a,ele,0,n-1);
    if(result==0)
    printf("Element not found");
    else
    printf("Element found at index %d",result);
    return 0;
}
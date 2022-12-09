 #include <stdio.h>
 int main()
 {
    int m;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&m);
    int a[100],ele;
    printf("Enter the elements of the array\n");
    for (int i = 0; i < m; i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    int m1,m2,c=0,beg=0,end=m-1;
    while (beg<=end)
    {
        
        m1=beg+(end-beg)/3;
        m2=m1+(end-beg)/3;
        if(ele==a[m1] || ele==a[m2])
        {
            c++;
            break;
        }
        else if(ele<a[m1])
        end=m1-1;
        else if(ele>a[m2])
        beg=m2+1;
        else{
        beg=m1+1;
        end=m2-1;
        }
    }
    if(c==1)
    printf("Element found");
    else
    printf("Element not found");
    
    return 0;
 }
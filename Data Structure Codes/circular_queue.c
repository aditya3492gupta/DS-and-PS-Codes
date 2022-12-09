#include <stdio.h>
#define size 10
typedef struct
{
    int a[size];
    int f;
    int r;
}queue_type;
void initial(queue_type *v){
    v->f=-1;
    v->r=-1;
}
int overflow(queue_type *v)
{
    if ((v->f==0 && v->r==size-1) || v->f==v->r+1)
        return 0;
    else
        return 1;
}
int underflow(queue_type *v)
{
    if (v->f == -1 && v->r==-1)
        return 0;
    else
        return 1;
}
int enqueue(queue_type *v)
{
    int ele;
    printf("Enter the element\n");
    scanf("%d", &ele);
    if(v->f==-1 && v->r==-1){
        v->f=0;
        v->r=0;
    }
    else if(v->r==size-1)
        v->r=0;
    else
        v->r++;
    v->a[v->r]=ele;
}
int dequeue(queue_type *v)
{
    int temp = v->a[v->f];
    if(v->f==v->r){
        v->f=-1;
        v->r=-1;
    }
    else if(v->f==size-1)
    v->f=0;
    else
    v->f++;
    return temp;
}
int main()
{
    queue_type s;
    initial(&s);
    int n,o,u,d;
    char ch;
    do
    {
        printf("Choose one of the following option\n1.Enqueue\n2.Dequeue\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                o=overflow(&s);
                if(o==0){
                printf("The queue have overflowed\n");
                break;}
                else
                enqueue(&s);
                break;
            case 2:
                u=underflow(&s);
                if(u==0){
                printf("The queue have underflowed\n");
                break;}
                else{
                d=dequeue(&s);
                printf("%d is deleted from the queue\n",d);
                }
                break;
            default:
                printf("Invalid choice");
        }
    
        printf("To continue press y\nTo discontinue press n\n");
        scanf("\n%c",&ch);
        if(ch=='n')
        printf("You are out of the program");
    }while (ch=='y');
       
    return 0;
}
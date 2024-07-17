#include<stdio.h>
int main()
 {

    int a[5],n,i,temp;
    printf("Enter the element in increasing order:");
    for(int i=0;i<4;i++)
    {
        printf(" ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be insert:");
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        if(a[i]>n)
        {
            temp=a[i];
            a[i]=n;
            n=temp;
        }
        if(i==3)
        a[4]=n;
    }for(i=0;i<5;i++)
    {
        printf("\na[%d]:%d:",i,a[i]);
    }

    return 0;
 }
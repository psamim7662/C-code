#include<stdio.h>
int main(){
    int a[100],f[10],n,i,j;
    printf("Enter the number of values of the array:");
    scanf("%d",&n);
    printf("Enter the values for array: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    f[i]=1;//at a time of storing the array the freq array should be 1
    }
    //start the operation with 2 loop
    for(i=0;i<n;i++)
    {
        if(f[i]==0)//delete the unnecessary data to avoid repeating 
        continue;
        for(j=i+1;j<n;j++)//freq change will be start from the next position
        {
            if(f[j]==0)
            continue;
            if(a[i]==a[j])
            {
                f[i]++;
                f[j]=0;//after comparing for first time of the freq second time the freq of same element will be 0
            }
        }

    }
    printf("Frequencies are\n");
    for(i=0;i<n;i++)
    {
        if(f[i]!=0)//Those elements which are not zero
        printf("The freq of %d is\n %d:",a[i],f[i]);

    }
}

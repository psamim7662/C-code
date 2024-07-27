#include<stdio.h>
#include<string.h>
void main(){
    char name[20][10],temp[10];
    int i,j,n;
    printf("Enter how many names you want to sort?:");
    scanf("%d",&n);
    printf("Eneter %d names:\n",n);
    for(i=0;i<n;i++)
    scanf("%s",name[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcasecmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);


            }
        }
    }
    printf("sorted names are:\n");
    for(i=0;i<n;i++)
    printf("%s\n",name[i]);

}
#include<stdio.h>
// #include<conio.h>
int main(){
    int a[1000],b[1000],i,j,n1,n2;
    printf("Enter the elements for first array:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements for second array:");
    scanf("%d",&n2);
     for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    // return 0;

    printf("The union of two sets is:");
    for(i=0;i<n1;i++){
    printf("%d",a[i]);
}
    for(i=0;i<n2;i++)
    {
     for(j=0;j<n1;j++)
     {
      if  (b[i]==a[j]){
        break;
     }
     }
     if(j==n1){
     printf("%d",b[i]);// Element not found, print it
        
    }
    }
    
    return 0;
}

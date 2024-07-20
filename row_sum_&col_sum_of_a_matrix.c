#include<stdio.h>
int main(){
    int a[3][3],i,j,sum;

    //Take ip for the 2d matrix
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf("Enter the value of the matrix at position(%d %d):\n ",i+1,j+1);
        scanf("%d",&a[i][j]);
        //Output of the matrix
    }
    }
    printf("\n2D array elements are: ");
        for(i=0;i<3;i++)
        {
            // printf("\n");
           
         for(j=0;j<3;j++)
          {
            printf("%d\t",a[i][j]);
            }
         printf("\n");
        }
        
        for(i=0;i<3;i++)
        {
         sum=0;
         for(j=0;j<3;j++)
         {
         sum+=a[i][j];
        

        }
         printf("\nrow sum%d  is %d:\n",i+1,sum);
        }
        for(i=0;i<3;i++)
        {
         sum=0;
         for(j=0;j<3;j++)
         {
         sum+=a[j][i];
         

        }
        printf("\ncol sum %d is %d:\n",i+1,sum);
}
    return 0;

}
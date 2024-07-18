#include<stdio.h>
int main(){
    int mat[100][100],i,j,n,row,col,sum=0;
    printf("Enter the no of rows for matrix:\n");
    scanf("%d",&n);
    //creating the matrix
    printf("Enter the data of the matrix");
    for(row=0;row<=n-1;row++)
    {
        printf("\nEnter the row:");
        for(col=0;col<=n-1;col++)
        {
            printf("\nEnter the col element%d:",col);
            scanf("%d",&mat[row][col]);


        }
    }
    //printing the matrix
    printf("The matrix is:\n ");
    for(row=0;row<=n-1;row++)
    {
        for(col=0;col<=n-1;col++)
        {
            printf("\t%d",mat[row][col]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
      sum+=mat[i][i];
      printf("The trace of the matrix is:%d",sum);
      return 0;
}
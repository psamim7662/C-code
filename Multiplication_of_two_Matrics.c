#include<stdio.h>
// #include<conio.h>
#define N 100
void display(int mat[][N], int m, int n);
//calculating addition of two matrices
void add(int mat1[][N],int mat2[][N],int m,int n)
{
    int mat3[100][100],row,col;
    for(row=0;row<=m-1;row++)
    {
        for(col=0;col<=n-1;col++)
        {
            mat3[row][col]=mat1[row][col]*mat2[row][col];

        }
    }
    printf("\nThe Addition of the matrix is:",mat3);
    display(mat3,m,n);
}
//Printing the matrix after addition
void display(int mat[][N],int m,int n)
{
    int i,j;
    for(i=0;i<=m-1;i++)
    {
        printf("\n");
        for(j=0;j<=n-1;j++)
        {
            printf("\t%d",mat[i][j]);

        }
    }
}
//making the matrix
int main(){
    int mat1[100][100],mat2[100][100];
    int i,j,n,m,row,col;
    printf("Enter the size of the matrix(m*n):");
    scanf("%d%d",&m,&n);
//Take the input for matrix 1
    printf("Enter the value for matrix 1:\n");
    for(row=0;row<=m-1;row++)
    {
       printf("Enter the value for row%d:\n",row);

        for(col=0;col<=n-1;col++)
        {
         printf("Enter the value for col%d:\n",col);
         scanf("%d",&mat1[row][col]);

        }
    }

//Take the input for matrix 2
    printf("Enter the value for matrix 2:\n");
    for(row=0;row<=m-1;row++)
    {
       printf("Enter the value for row%d:\n",row);

        for(col=0;col<=n-1;col++)
        {
         printf("Enter the value for col%d:\n",col);
         scanf("%d",&mat2[row][col]);

        }
    }
    add(mat1,mat2,m,n);//Calling the function to add two matix
}


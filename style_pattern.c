// 1#                1space=3
// 2#           2         3space=2
// 3#       4        5         6space=1
// 4# 7         8        9         10space=0
// #1,2,3,4 for l
        
    
#include<stdio.h>

int main()
{

    int k = 1;
    // initialize k to 1 for first value

    for(int i=1; i<=4; i++) //i=4
    {
        for(int j=1; j<=4-i; j++)   //4-3 =1  for space calculaton which will decrease in every line
        {
            printf(" ");
        }

        for(int l=1; l<=i; l++)  //k=11
        {
            printf("%d ", k++);
        }

        printf("\n");
    }

    return 0;
}
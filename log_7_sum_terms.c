#include<stdio.h>
#include<math.h>
int main(){
    int count;
    float x,res=0.0;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    for(count=1 ;count<=7;count++)
    {
         if(count==1)
         {
            res=(x-1)/x;//just for first term
         }
         else{
            res=res+pow((x-1)/x,count)*0.5;//previous terms+calculate other term
            }
    }
    printf("Result of first 7 terms is=%0.2f\n:",res);
    return 0;
}

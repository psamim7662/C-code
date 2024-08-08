#include<stdio.h>
struct rational{
int neum;
int den;
};
int calcHcf(int x,int y)
{
    int rem;
    if(x>y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    rem=y%x;
    while(rem!=0)
    {
        y=x;
        x=rem;
        rem=y%x;
    }
    return x;
}
int main(){
    struct rational a,b,add,mult;
    int c;
    printf("\n Enter for the first rational number:");
    printf("\n Enter the numerator:");
    scanf("%d",&a.neum);

    printf("\n Enter the denominator:");
    scanf("%d",&a.den);

    printf("\nThe rational number is:%d/%d ",a.neum,a.den);

    printf("\n Enter for the second rational number:");
    printf("\n Enter the numerator:");
    scanf("%d",&b.neum);

    printf("\n Enter the denominator:");
    scanf("%d",&b.den);

    printf("\nThe rational number i:%d/%d ",b.neum,b.den);
    

    add.neum=a.neum*b.den+b.neum*a.den;
    add.den=a.den*b.den;
    c=calcHcf(add.den,add.neum);
    add.neum=add.neum/c;
    add.den=add.den/c;

    mult.neum=a.neum*b.neum;
    mult.den=a.den*b.den;
    c=calcHcf(mult.den,mult.neum);
    mult.den=mult.den/c;
    mult.neum=mult.neum/c;


    printf("\nThe addition is %d %d ",add.neum,add.den);
    printf("\nThe multiplication  is %d %d ",mult.neum,mult.den);

    return 0;

}
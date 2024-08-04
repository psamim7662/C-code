#include<stdio.h>
struct  comp
{
  float real;
  float img;

};
void compAdd(struct  comp a,struct comp b)
{
    struct comp c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    printf("\nThe Addition  result  is:(%g+%gi)",c.real,c.img);
}
void compMul(struct  comp a,struct comp b)
{
    struct comp c;
    c.real=a.real*b.real-a.img*b.img;
    c.img=a.img*b.real+b.img*a.real;
    printf("\nThe Multiplication  result  is:(%g+%gi)",c.real,c.img);
}


int main(){
    struct comp a,b;
    printf("Enter for the 1st complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&a.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&a.img);

    printf("\nThe complex number is:(%g+%gi)",a.real,a.img);

    printf("\nEnter for the 2nd complex number:\n");
    printf("Enter the real part: ");
    scanf("%f",&b.real);
    printf("Enter the imaginary part: ");
    scanf("%f",&b.img);

    printf("\nThe complex number is:(%g+%gi)",b.real,b.img);

    compAdd(a,b);
    compMul(a,b);

    return 0;


}
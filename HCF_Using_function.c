#include<stdio.h>
int gcd(int a,int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    //base case
    if(a==b)
    return a;
    
    if(a>b)
    return(a-b,b);
    return(a,b-a);
}
int main()
{
    int a=98,b=32;
    printf("GCD of %d and %d is:%d",a,b,gcd(a,b));
    return 0;
    
}

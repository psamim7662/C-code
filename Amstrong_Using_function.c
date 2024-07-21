#include<stdio.h>
#include <math.h>
void amstrong(int n){
int sum = 0;
int original_n = n,digit;
int num_digits=0 ;  // Calculating  number of digits in the number

int temp = n;//initialize temp with the given integer
    while (temp != 0) {//given integer is not '0'
        num_digits++;
        temp /= 10;//discarding the remainder from the digit
    }

    temp = n;
    while (temp > 0){
        digit = temp % 10;  // Extract the last digit of n
        sum += pow(digit, num_digits);//calculete the power of every of every digit
        temp = temp / 10;  // Remove the last digit from n
    }
if (sum == original_n)
    printf("is an Armstrong number",original_n);

else
    printf( "is not an Armstrong number",original_n);
}

int main(){
    int n;
    printf("Enter  a integer:");
    scanf("%d",&n);
    amstrong(n);
    return 0;
}
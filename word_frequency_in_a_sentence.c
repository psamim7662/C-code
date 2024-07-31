#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int i,n,len,wordcount;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("The string is:%s \n",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        wordcount++;
    }
    printf("The number of words present in this string is:%d",wordcount);
    return 0;
}

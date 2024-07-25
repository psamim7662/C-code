#include<stdio.h>
int main(){
    char fname[20],mname[20],lname[20];
    printf("Enter the first second last name for abbreviation....\n");
    scanf("%s %s %s", fname, mname, lname);
    printf("Abbreviated name is....:");
    printf("%c. %c. %s\n",fname[0],mname[0],lname);
    return 0;
}
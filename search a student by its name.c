#include<stdio.h>

struct student{
    int roll;
    char stdId[100];
    char name[100];
    int marks;

};
int main(){
    int i ,j,n=4,flag=1;
    char name[100];

  struct  student temp,s[4]=
  {
   { 001,"std001","Samim Piyada",99}, { 002,"std002","Ratan tata",100}, { 003,"std003","Sonu Sud",90},
    { 004,"std004","Rosalind",50}
  };
 printf("Enter the student name:");
 gets(name);
// scanf("%s",&name);
// printf("The name is:",name);
 for(i=0;i<n;i++)
 {
 	if(strcmp(name,s[i].name)==0){
 		printf("\nThe studet record is:");
 		printf("\nRoll\t\stdent ID\t\Name\t\Marks");
  	    printf("\n--------------------------------------------------------------------------------------------------------");
 		printf("\n%d\t%s\t%s\t%d",s[i].roll,s[i].stdId,s[i].name,s[i].marks);
 		flag=0;
	 }
 }
 if(flag)
 printf("\nThe name is not found");
 
  
  
}

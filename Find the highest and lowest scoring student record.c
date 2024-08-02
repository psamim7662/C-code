#include<stdio.h>

struct student{
    int roll;
    char stdId[100];
    char name[100];
    int marks;

};
int main(){
    int i ,j,n=4;
  struct  student temp,s[4]=
  {
   { 001,"std001","Samim Piyada",99}, { 002,"std002","Ratan tata",100}, { 003,"std003","Sonu Sud",90},
    { 004,"std004","Rosalind",50}
  };
  for (i=0;i<n-1;i++)
  {
  	for(j=0;j<n-i-1;j++)
  	{
  		if(s[j].marks<s[j+1].marks)
  		{
  			temp=s[j];
  			s[j]=s[j+1];
  			s[j+1]=temp;
  			
		  }
	  }
  }
  printf("The students list according to highest and lowest scoring:");
//  printf("\nRoll\t\stdent ID\t\Name\t\t\Marks");
//  printf("\n--------------------------------------------------------------------------------------------------------");
//  for(i=0;i<n;i++)
//  {
     printf("\nHighest Scoring:");
  	 printf("\nRoll\tStdent ID\tName\t\tMarks");
  	  printf("\n--------------------------------------------------------------------------------------------------------");


  	printf("\n%d\t\t%s\t\t%s\t\t%d",s[0].roll,s[0].stdId,s[0].name,s[0].marks);
//  for(i=0;i<n;i++)
      printf("\nLowest Scoring");
  	  printf("\nRoll\tstdent ID\tName\t\tMarks");
  	  printf("\n--------------------------------------------------------------------------------------------------------");
  	  printf(":\n%d\t\t%s\t\t%s\t\t%d",s[3].roll,s[3].stdId,s[3].name,s[3].marks);

//  }
}

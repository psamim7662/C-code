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
  for (i=0;i<n;i++)
  {
  	for(j=0;j<n-1;j++)
  	{
  		if(s[j].marks<s[j+i].marks)
  		{
  			temp=s[j];
  			s[j]=s[j+1];
  			s[j+1]=temp;
  			
		  }
	  }
  }
  printf("The students list according to their marks(descending):");
  printf("\nRoll\t\stdent ID\t\Name\t\t\Marks");
  printf("\n--------------------------------------------------------------------------------------------------------");
  for(i=0;i<n;i++)
  {
  	printf("\n%d\t\t%s\t\t%s\t\t%d",s[i].roll,s[i].stdId,s[i].name,s[i].marks);
  }
}

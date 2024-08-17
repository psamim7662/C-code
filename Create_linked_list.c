#include<stdio.h>
#include<stdlib.h>
//creating a node of a linked list
typedef struct node
{
    int data;
    struct node *next;
    
}node;
int main(){
//create first node this will act as a head node
node *first=(node *)malloc(sizeof(node));
first->data=10;

node *second=(node *)malloc(sizeof(node));
second->data=20;

node *third=(node *)malloc(sizeof(node));
third->data=40;

//linking the nodes
first->next=second;
second->next=third;
third->next=NULL;

printf("The Linked list is...:");
node *temp=first;
while (temp)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
  return 0;

}
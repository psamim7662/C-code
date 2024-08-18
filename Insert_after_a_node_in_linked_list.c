#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createNewNode(int data);
//function to insert new node after a node
struct node *insertAfter(struct node *head,int key,int  newData)
{
    struct node *curr=head;//pointer to traverse the list
    while(curr!=NULL)
    {
        if(curr->data==key)
          break;
        curr=curr->next;
    }
    if(curr==NULL)
    return head;

    struct node *new_node=createNewNode(newData);
    new_node->next=curr->next;
    curr->next=new_node;
    return head;
}
//Function to print the linked list
void printlist(struct node *node)
{
    // struct node *temp=node;
    while (node!=NULL)
    {
        printf("%d-> ",node->data);
        node=node->next;
    }
    printf("\n");
}
//create a new node
struct node *createNewNode(int data)
{
    struct node *new_node=(struct node *)malloc(sizeof(new_node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}
int main(){
    struct node *head=createNewNode(2);
    head->next=createNewNode(3);
    head->next->next=createNewNode(7);
    head->next->next->next=createNewNode(5);
    head->next->next->next->next=createNewNode(6);


printf("Original linked list is...:");
printlist(head);
int key=3,newData=4;
head=insertAfter(head,key,newData);
printf("Linked list after insertion...:");
printlist(head);
return 0;

}
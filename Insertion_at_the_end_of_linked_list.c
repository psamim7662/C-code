#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
//creating a new mode
struct node *createNewNode(int new_data){
    struct node *new_node=(struct node*)malloc(sizeof(new_node));
    new_node->data=new_data;
    new_node->next=NULL;
    return new_node;
}
//function to append the new node
struct node *append(struct node *head,int new_data)
{
    struct node *new_node=createNewNode(new_data);
    if(head==NULL){
    return new_node;
}
    //store the reference of the head node into temp
    struct node *last=head;
    //traverse till  the last node
    while(last->next!=NULL) 
    {
        last=last->next;
    }
    last->next=new_node;
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

int main(){
    struct node *head=createNewNode(2);
    head->next=createNewNode(3);
    head->next->next=createNewNode(7);
    head->next->next->next=createNewNode(5);
    head->next->next->next->next=createNewNode(6);

    printf("Original linked list is...:");
    printlist(head);

    head = append(head, 1);

    printf("\nAfter inserting 1 at the end:");
    printlist(head);

    return 0;
}

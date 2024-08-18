#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
  
};
//create a new node
struct node *createNewNode(int data)
{
    struct node *new_node=(struct node *)malloc(sizeof(new_node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}
//function to insert new node at the beginning
void insertNewNodeBeinning(struct node **head,int data){
    struct node *new_node=createNewNode(data);
    new_node->next=*head;
    *head=new_node;

}
//Function to print the linked list
void printlist(struct node *head)
{
    struct node *temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head=NULL ; //Initializes head as empty
    insertNewNodeBeinning(&head,10);
    insertNewNodeBeinning(&head,20);
    insertNewNodeBeinning(&head,30);
    insertNewNodeBeinning(&head,40);
    insertNewNodeBeinning(&head,50);

    printlist(head);
    struct node *temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
    
  return 0;
}



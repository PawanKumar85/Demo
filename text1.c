#include <stdio.h>
#include <malloc.h>
 
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

int main()
{
    struct node *temp;
    int x;
    scanf("%d");

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = x;
    new_node -> next = NULL;

    if(head == NULL)
        head = new_node;
    else
    {
        temp = head;
        temp -> next = new_node;
        temp = new_node;
    }

    temp = head;
    while(temp -> next != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }



    return 0;
}
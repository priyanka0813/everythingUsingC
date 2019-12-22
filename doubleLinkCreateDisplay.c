#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head=NULL,*last=NULL;

void create(int n) //function to create double linked list
{
    int i;
    for(i=0;i<n;i++)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of node %d",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            last=head;
        }
        else
        {
            struct node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=last;
            last=newnode;
        }
    }
    printf("double linked list successfully created\n");
}

void display()
{
    if(head==NULL)
    {
        printf("nothing to display");
    }
    else
    {
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("-%d-",temp->data);
        temp=temp->next;
    }
    }
}

int main()
{
    int n;
    printf("enter the number of nodes you want to create \n");
    scanf("%d",&n);
    
    create(n);
    display();
    return 0;
}

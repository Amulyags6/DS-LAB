#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;
void enqueue()
{
    int x;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node)) ;
    printf("enter the value\n");
    scanf("%d",&x);
    ptr->data=x;
    ptr->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
    printf("node inserted\n");
}
void dequeue()
{
    int x;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node)) ;
    if(front==NULL)
    {
        printf("empty queue\n");
    }
    else
    {
        ptr=front;
        front=ptr->next;
        free(ptr);
    }
    printf("node deleted\n");
}
void display()
{
    int i;
    struct node *ptr;
    ptr=front;
    if(ptr==NULL)
    {
        printf("empty queue\n");
    }
    else
    {
        printf("printing elmemts in queue\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("operations performed on queue\n");
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
             break;
            case 2: dequeue();
            break;
            case 3 : display();
            break;
            case 4 : exit(0);
            default:printf("enter the valid option\n");
            break;
        }
    }
}
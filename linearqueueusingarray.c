#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;
void insert();
void delete();
void display();
void insert()
{
   int x;
   printf("enter the element\n");
   scanf("%d",&x);
   if(rear==size-1)
   {
    printf("overflow\n");
    return;
   }
   if(rear==-1&&front==-1)
   {
    front=0;
    rear=0;
   }
   else
   {
    rear=rear+1;
   }
   queue[rear]=x;
   printf("value inserted\n");
}
void delete()
{
    int x;
    if(rear==-1&&front==-1)
    {
        printf("underflow\n");
    }
    else
    {
         x=queue[front];
         if(rear==front)
         {
           rear=-1;
           front=-1;
         }
        else
        {
           front=front+1;
        }
    }
    printf("value deleted is %d\n",x);
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("empty queue\n");
    }
    else
    {
        printf("printing elements of stack\n");
        for(i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("operqtions performed on queue\n");
        printf("1insert\n2delete\n3display\n4exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3 : display();
            break;
            case 4 : exit(0);
            default:printf("enter the valid choice\n");
        }  
    }
}

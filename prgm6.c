#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#define MAX 3
char cq[MAX];
int front=-1,rear=-1;
void insert(char);
void delete();
void display();
void main()
{
int ch;
int item;
while(1)
{
printf("\n\n~~Menu~~:");
printf("\n==>1.Insertion and overflow demo");
printf("\n==>2.Deletion and underflow demo");
printf("\n==>3.Display");
printf("\n==>4.Exit");
printf("\nEnter Your choice : ");
scanf("%d",&ch);
__fpurge(stdin);
switch(ch)
{
case 1 : printf("\n\nEnter an element to be inserted : ");
scanf("%d",&item);
insert(item);
break;
case 2 : delete();
break;
case 3 : display();
break;
case 4 : exit(0);
default : printf("\n\nPlease enter a valid choice");
break;
}
}
}

void insert(char item)
{
if(front==(rear+1)%MAX)
printf("\n\n~~Circular Queue overflow~~");
else
{
if(front==-1)
front=rear=0;
else
rear=(rear+1)%MAX;
cq[rear]=item;
}
}

void delete()
{
char item;
if(front==-1)
printf("\n\n~~Circular Queue Underflow~~");
else
{
item=cq[front];
printf("\n\nDeleted element from the queue is : %c",item);
if(front==rear)
front=rear=-1;
else
front=(front+1)%MAX;
}
}

void display()
{
int i;
if(front==-1)
printf("\n\nCircular Queue is Empty");
else
{
printf("\nCircular Queue contents are : \n");
printf("Front[%d]->",front);
for(i=front;i!=rear;i=(i+1)%MAX)
printf("%c",cq[i]);
printf("%c",cq[i]);
printf("  <-[%d]Rear",rear);
}
}

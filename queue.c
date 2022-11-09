#include<stdio.h>
#define MAX 4
int queue_array[MAX];
int front=-1;
int rear=-1;
main()
{
   int choice;
   while(1)
   {
       printf("1. Insert element to queue \n");
       printf("2. Delete element from queue \n");
       printf("3. Display element of queue \n");
       printf("4. Exit \n");
       printf("Enter your choice: \n");
       scanf("%d", &choice);
       switch(choice){
       case 1:
        insert();
        break;
       case 2:
        delete();
        break;
       case 3:
        display();
        break;
       case 4:
        exit(1);
       default:
        printf("wrong choice \n");
       }
   }
}
insert()
{
    int item;
    if (rear==MAX-1)
        printf("Queue overflow \n");
    else{
        if(front==-1)
            front=0;
        printf("Insert the element in queue: \n");
        scanf("%d",&item);
rear=rear+1;
queue_array[rear]=item;
    }

}
delete()
{
    if (front==-1 || front>rear)
    {
        printf("queue underflow \n");
        return;

    }
    else{
        printf("Element deleted from queue is : %d\n" ,queue_array[front]);
        front=front+1;
    }
}
display()
{
int i;

if(front==-1)
    printf("queue is empty \n");
else{
    printf("queue is : \n");
    for(i=front; i<=rear; i++)
        printf ("%d ",queue_array[i]);
    printf("\n");
}
}
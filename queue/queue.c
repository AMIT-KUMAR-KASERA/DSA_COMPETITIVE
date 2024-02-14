#include<stdio.h>
#define max 5
void enqueue();
void dequeue();
void dispaly();
 int front=-1,rear=-1;
 int que[max];
int main()
{
    int choice;
    do{
        printf("enter your queue ------------->\n");
        printf("enter 1 enqueue the elements--------> \n");
        printf("enter 2 dequeue  the elements -------->\n");
        printf("enter 3 dispaly \n ---------------->");
        printf("enter your choice---------------> \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            dispaly();
            break;
            default:
            printf("invalid choice \n");
            break;
        }

    }while(choice!=0);

}
void enqueue()
{
    int data;
    printf("enter your data \n");
    scanf("%d",&data);
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        que[rear]=data;
    }
    else if(rear==max-1)
    {
        printf("queue is overflow \n");
    }
    else{
        rear=rear+1;
        que[rear]=data;

    }

}
void dequeue()
{
    printf("dequeue the elements \n");
    if(rear<front)
    {
        printf("queue is underflows \n");
    }
    else{
        printf("dequeue the elements %d\n",que[front]);
        front=front+1;
        
    }
}
void dispaly()
{
    int i;
    i=front;
    printf("display the elements \n");
    for(;i<=rear;i++)
    {
        printf("queue data is printed %d\n",que[i]);
    }
}
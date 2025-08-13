Singly LinkedList
=================

menu_programe:-
=============
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define Null 0
struct singly
{
    int info;
    struct singly *next;
};

typedef struct singly node;
node *create(node *);
node *insertfp(node *);
node *insertlp(node *);
node *deletefp(node *);
node *deletelp(node *);
void display(node *);
void main()
{
    node *start, *prev, *temp;
    start = Null;
    int ch;
    do
    {
        printf("\n singly linkedlist");
        printf("\n 1 creating ");
        printf("\n 2. inserting at the first position ");
        printf("\n 3. inserting at the last position ");
        printf("\n 4 deletion first position ");
        printf("\n 5.deletion last position ");
        printf("\n 6. display");
        printf("\n enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            start = create(start);
            break;
        case 2:
            start = insertfp(start);
            break;
        case 3:
            start = insertlp(start);
            break;
        case 4:
            start = deletefp(start);
            break;
        case 5:
            start = deletelp(start);
            break;
        case 6:
            display(start);
        }

    } while (ch != 7);
}
node *create(node *start)
{
    int x, ch;
    node *temp, *prev;
    do
    {
        printf("\n enter values of node ");
        scanf("%d", &x);

        temp = (node *)malloc(sizeof(node));
        temp->info = x;
        temp->next = Null;

        if (start == Null)
        {
            start = temp;
        }
        else
        {
            prev->next = temp;
        }
        prev = temp;
        printf("\n want to add more node (y=1/n=0)");
        scanf("%d", &ch);

    } while (ch != 0);
    return start;
}
node *insertfp(node *start)
{
    node *temp;
    int x;
    printf("\n enter value of node ");
    scanf("%d", &x);
    temp = (node *)malloc(sizeof(node));
    temp->info = x;
    temp->next = start;
    start = temp;
    return start;
}
node *insertlp(node *start)
{
    node *temp, *prev;
    int x;
    prev = start;
    do
    {
        prev = prev->next;
    } while (prev->next != Null);
    printf("\n enter value of node ");
    scanf("%d", &x);
    temp = (node *)malloc(sizeof(node));
    temp->info = x;
    temp->next = Null;

    prev->next = temp;
    return start;
}
node *deletefp(node *start)
{
    node *temp;
    temp = start;
    start = start->next;
    free(temp);
    return start;
}
node *deletelp(node *start)
{
    node *prev, *temp;
    prev = Null;
    temp = start;
    do
    {
        prev = temp;
        temp = temp->next;
    } while (temp->next != Null);
    prev->next = Null;
    free(temp);
    return start;
}
void display(node *start)
{
    node *temp;
    temp = start;
    printf("\n information of the singly linked list ");
    do
    {
        printf("%d", temp->info);
        temp=temp->next;
    } while (temp != Null);
}


===========================================================================

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define Null 0
struct singly_linked
{
    /* data */

    int info;
    struct singly_linked *next;
};
typedef  struct singly_linked node;

node * create(node *start);

node *create(node *start)
{
    int x, ch;
    node *temp, *prev;
    do
    {
        printf("\n enter values of node ");
        scanf("%d", &x);

        temp = (node *)malloc(sizeof(node));
        temp->info = x;
        temp->next = Null;

        if (start == Null)
        {
            start = temp;
        }
        else
        {
            prev->next = temp;
        }
        prev = temp;
        printf("\n want to add more node (y=1/n=0)");
        scanf("%d", &ch);

    } while (ch != 0);
    return start;
}
void display(node *start)
{
    node *temp;
    temp=start;
    while(temp!=Null)
    {
        printf("%d",temp->info);
        temp=temp->next;
    }

}

void main()
{
     node *start;
    start=Null;
    start=create(start);
    printf("\n the linked is :");
    display(start);
}
===========================================================================
#include<stdio.h>
#include<stdlib.h>
struct singly_linked{
    int data;
    struct singly_linked *next;
};
void printlist(struct singly_linked *ptr)
{
    while (ptr!=NULL)
    {
        /* code */
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    
}

int main()
{

    struct singly_linked *head;
    struct singly_linked *first=NULL;
    struct singly_linked *second=NULL;
    struct singly_linked *third=NULL;
    first=(struct singly_linked *)malloc(sizeof(struct singly_linked ));
   second= (struct singly_linked *)malloc(sizeof(struct singly_linked ));
   third= (struct singly_linked *)malloc(sizeof(struct singly_linked ));

   first->data=1;
   second->data=2;
   third->data=3;
     
     first->next=second;
     second->next=third;
     third->next=NULL;
     head=first;

     printlist(head);


}
===========================================================================
Doubly LinkedList
=================
 #include<stdio.h>
 #include<stdlib.h>
 #include<malloc.h>
 #define Null 0
 struct doubly
 {
    int info;
    struct doubly *left ,*right;

 };
 typedef struct doubly node;
 node *create(node *start)
 {
    node *temp, *prev;
    int x, ch;
    do
    {
        printf("\n enter the value of node");
        scanf("%d",&x);
        temp=(node *)malloc(sizeof(node));
        temp->info=x;
        temp->left=Null;
        temp->right=Null;
        if(start==Null)
        {
            start=temp;
        }
        else{
            prev->right=temp;
            temp->left=prev;

        }
        prev=temp;
        printf("\n want to add more node (y-1/n-0)");
        scanf("%d",&ch);
    } while (ch!=0);
    return start;
 }

    void display(node *start)
    {
       
         node *temp;
    temp=start;
  do
  {
    /* code */
    printf("%d",temp->info);
    temp=temp->right;
  } while (temp!=Null);
    }
  
    

 void  main()
 {
    
    node *start;
    start=Null;
    start=create(start);
    printf("the doubly linked list is :");
    display(start);
    
 }


===========================================================================
circular_linkedList
===================

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define Null 0
struct circular
{
    int info;
    struct circular *next;
};
typedef struct circular node;
node *create(node *start)
{
    node *temp, *prev;
    int x, ch;
    do
    {
        printf("\n enter the value of node");
        scanf("%d", &x);
        temp = (node *)malloc(sizeof(node));
        temp->info = x;
        temp->next = Null;
        if (start == Null)
        {
            start = temp;
            temp->next=start;
        }
        else
        {
            prev->next = temp;
            temp->next = start;
        }
        prev = temp;
        printf("\n want to add more node (y-1/n-0)");
        scanf("%d", &ch);
    } while (ch != 0);
    return start;
}

void display(node *start)
{

    node *temp;
    temp = start;
    do
    {
        /* code */
        printf("%d", temp->info);
        temp = temp->next;
    } while (temp != start);
}

void main()
{

    node *start;
    start = Null;
    start = create(start);
    printf("the doubly linked list is :");
    display(start);
}

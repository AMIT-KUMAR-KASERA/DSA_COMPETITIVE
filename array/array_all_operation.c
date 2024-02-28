#include<stdio.h>
#define max 10
int arr[max]={10,20,30,40,50,60,70,80,90,100};
void search();
void update();
void insert();
void deletion();
void display();


int main()
{
    int choice;
    do{
    printf("\narray all operation ------->\n");
    printf("1 searching of the elements ------>\n");
    printf("2 updating of the elements ----------->\n");
    printf("3 insertion of the elements ----------->\n");
    printf("4 deletion of the elements ---------->\n");
    printf("enter your choice ? \n");
    scanf("%d",&choice );
    switch (choice)
    {
     case 1:
        search();
        break;
       case 2:
        update();
        break;
        case 3:
        insert();
        break;
        case 4:
        deletion();
        break;
        case 5:
        display();
        break;
        default:
        printf("invalid choice \n");
        break;
    }
    }while(choice!=0);
 
}
void search()
{
    int search;
    int flag=0;
    int i;
    printf("enter the elements you want to search \n");
    scanf("%d",&search);
    for(i=0;i<max;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            break;

        }

    }
    if(flag==0)
    {
        printf("the elemets is not found \n");

    }
    else
    {
        printf("the elements is parsent at the position %d\n",i+1);
    }


}
void update()
{
    int pos;
    int values;
    int i;
    printf("enter the position \n");
    scanf("%d",&pos);
    printf("enter the values \n");
    scanf("%d",&values);
    for(i=0;i<max;i++)
    {
        printf("%d \t",arr[i]);
    }
    arr[pos-1]=values;
    printf("\n after the updated elements\n");
    for(i=0;i<max;i++)
    {
        printf("%d  \t",arr[i]);
    }



}
void insert()
{
    int values,pos,i;
    printf("enter the values \n");
    scanf("%d",&values);
    printf("enter the position of the elements \n");
    scanf("%d",&pos);
    for(i=max;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=values;
    printf("after the insertion of the elements \n");
    for(i=0;i<=max;i++)
    {
        printf("%d \t",arr[i]);

    }

}
void deletion()
{
   int pos;
   int i;
   printf("enter the index you want to delete \n");
   scanf("%d",&pos);
   for(i=pos-1;i<max;i++)
   {
    arr[i]=arr[i+1];
   }
   printf("after the deleting of the array \n");
   for(i=0;i<max-1;i++)
   {
    printf("%d \t",arr[i]);
   }
   
}
void display()
{

}
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;


void getfront(){
printf("%d",front->data);
}
void getrear(){
 printf("%d",rear->data);
}
void insertion()
{
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        ptr -> data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
void  delete_element ()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}
int main ()
{
    int choice;
    while(choice != 6)
    {
        printf("\nMain Menu \n");
        printf("\n1.insert an element\n2.Delete an element\n3.Exit\n4.GetFront\n5.GetRear");
        printf("\nEnter your choice ?");
        scanf("%d",& choice);
        if (choice==1)
            insertion();
        if (choice==2)
           delete_element();
        if (choice==3)
            exit(0);
     //  if (choice>=4)
        //    printf("\nEnter valid choice??\n");
         if (choice==4){
            getfront();}
        if (choice==5)
            getrear();
            }

    return 0;
}


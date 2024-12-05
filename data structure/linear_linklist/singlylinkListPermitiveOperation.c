// linear singly linked list 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start;

void add_at_beg ();
void add_at_end ();
void add_at_pos();
void delete_beg();
void delete_end();
void delete_pos();
void display();
void search();
void count();
int main ()
{
    int choice =0;
    while(choice != 10)
    {
        printf("\n\nChoose one option from the following list ...\n");
        printf("\n1.Insert at begining\n2.Insert at End\n3.Insert at any random location\n4.Delete from Beginning\n5. Delete from End\n6.Delete node from a specified location\n7.Display\n8.Exit\n9.count\n10.search");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            add_at_beg();
            break;
            case 2:
            add_at_end();
            break;
            case 3:
            add_at_pos();
            break;
            case 4:
            delete_beg();
            break;
            case 5:
            delete_end();
            break;
            case 6:
            delete_pos();
            break;
            case 7:
            display();
            break;
            case 8:
            exit(0);
            break;
            case 9:
            count();
            break;
            case 10:
            search();
            break;
            default:
            printf("\nPlease enter valid choice..");
        }
    }
    return 0;
}
void add_at_beg()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nMemory Can not be Allocated.");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        ptr->info = item;
        ptr->next = start;
        start = ptr;
        printf("\nNode inserted\n");
        display();
    }

}
void add_at_end()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nMemory Can not be allocated.");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        ptr->info = item;
        ptr->next = NULL;
        if(start == NULL)//LL is empty
        {
            start = ptr;
            printf("\nNode inserted\n");
            display();
        }
        else
        {
            temp = start;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            printf("\nNode inserted\n");
            display();

        }
    }
}
void add_at_pos()
{
    int i,pos,item;
    struct node *ptr, *temp;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nMemory can not be allocated.");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&item);
        ptr->info = item;
        printf("\nEnter the position where you want to insert the item ");
        scanf("\n%d",&pos);
        temp=start;
        for(i=1;i<pos-1;i++)
        {
            temp = temp->next;
        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
        printf("\nNode inserted\n");
        display();
    }
}
void delete_beg()
{
    struct node *ptr;
    if(start == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = start;
        start = ptr->next;
        printf("\n%d Node is deleted from the begining.\n",ptr->info);
        free(ptr);
        display();
    }
}
void delete_end()
{
    struct node *temp1,*temp2;
    if(start == NULL)
    {
        printf("\nlist is empty");
    }
    else if(start -> next == NULL)
    {
        printf("\n%d Node is deleted from the begining.\n",start->info);
        start = NULL;
        free(start);
        display();
    }

    else
    {
        temp1 = start;
        while(temp1->next != NULL)
        {
            temp2=temp1;;
            temp1=temp1->next;
        }
        temp2->next = NULL;
        printf("\n%d Node is deleted from the last.\n",temp1->info);
        free(temp1);
        display();
    }
}
void delete_pos()
{
    struct node *temp1,*temp2;
    int pos,i;
    printf("\nEnter the pos of the node which you want to delete \n");
    scanf("%d",&pos);
    temp1=start;
    for(i=1;i<pos;i++)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2 ->next = temp1 ->next;
    printf("\n%d Node is Deleted from position %d\n",temp1->info,pos);
    free(temp1);
    display();
}
void search()
{
    struct node *ptr;
    ptr = start;
    if(ptr == NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        int target;
        int count=0;
        printf("enter target");
        scanf("%d",&target);
        while(ptr!=NULL)
        {
            count++;
            if(ptr->info==target)
            {
                printf("%d is found at %d",target,count);
                break;
            }
            ptr=ptr->next;
        }
    }
}
void display()
{
    struct node *ptr;
    ptr = start;
    if(ptr == NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        printf("\nValues are:");
        while (ptr!=NULL)
        {
            printf("%d ->",ptr->info);
            ptr = ptr -> next;
        }
    }
}
void count()
{
    struct node *ptr;
    ptr = start;
    if(ptr == NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        printf("no.of node is:%d",count);
    }
}

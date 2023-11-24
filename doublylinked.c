#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;   
void insertion(int);  
void display_forward();
void display_backward();  
int main()  
{  
int choice =0,n;  
    while(choice != 4)  
    {  
        printf("\nDoubly Linked List\n");   
        printf("\n1.Create List\n2.Display in Forward Order\n3.Display in Backward Order\n4.Exit");  
        printf("\nEnter your choice : ");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:
            printf("\nEnter the number of elements : ");
            scanf("%d",&n);
            insertion(n); 
            break;   
            case 2:     
            display_forward();  
            break;
            case 3:     
            display_backward();  
            break; 
            case 4:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }
    return 0;  
}  
void insertion(int n)  
{  
    head = NULL;
   struct node *ptr,*temp;  
   int item,i;
   for(i=0;i<n;i++)
    {
        ptr = (struct node *) malloc(sizeof(struct node));
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }   
        else  
        {  
            printf("\nEnter value %d : ",i+1);  
            scanf("%d",&item);  
            ptr->data=item;  
            if(head == NULL)  
            {  
                ptr->next = NULL;  
                ptr->prev = NULL;  
                head = ptr;  
            }  
            else  
            {  
                temp = head;  
                while(temp->next!=NULL)  
                {  
                    temp = temp->next;  
                }  
                temp->next = ptr;  
                ptr ->prev=temp;  
                ptr->next = NULL;  
            }  
        }
    }
    printf("\nLinked list created\n");  
}  

void display_forward()  
{  
    struct node *ptr;  
    printf("Elements in the linked list (forward) : ");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\t",ptr->data);  
        ptr=ptr->next;  
    }  
}
void display_backward()  
{  
    struct node *ptr,*last;  
    printf("Elements in the linked list (backward) : ");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        last = ptr;
        ptr=ptr->next;  
    }
    while(last != NULL)  
    {  
        printf("%d\t",last->data);  
        last=last->prev;  
    }   
}

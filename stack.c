#include<stdio.h>
#include<stdlib.h>
#define size 20
int stack[size],top=-1;
void push(int);
void pop();
void display();
int main()
{
	int choice,n;
	printf("stack using array");
	while(1)
	{
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		printf("\nENTER YOUR CHOICE ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nENTER TO BE INSERTED: ");
				   scanf("%d",&n);
				   push(n);
				   break;
			case 2:pop();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			default:printf("\nWrong choice");
		}
	}
}
void push(int value)
{
	if(top==size-1)
	printf("\nStack is full");
	else
	{
		top++;
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1)
	printf("\nStack is empty");
	else
	{
		printf("\nDeleted element:%d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
	printf("\nstack is empty");
	else
	{
		int i;
		printf("Stack elements are: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}

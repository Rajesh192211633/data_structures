#include<stdio.h>
#include<process.h>
#define max 5
void pop();
void push();
void display();
int top=-1,stack[max];
int main()
{
	while(1)
	{
	int ch;
	printf("**menu**");
	printf("\n1.pop\n2.push\n3.display\n4.exit\n");
	printf("enter your choice(1-4)\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:pop();
		break;
		case 2:push();
		break;
		case 3:display();
		break;
		case 4:exit(0);
		default:printf("wrong choice");
	}
    }
}
void push()
{
	int val;
	if(top==max-1)
	{
		printf("stack is full");
		
	}
	else
	{
	printf("\nEnter element to push:");
    scanf("%d",&val);
    top=top+1;
    stack[top]=val;
	}
}
void pop()
{
	int val;
	if(top==-1)
	{
		printf("stack is empty");
		
	}
	else
	{
     printf("the deleted element is %d",stack[top]);
     top--;
	}
}
void display()
	{
		int i;
	 printf("the stack elements are ...");
	 for(i=top;i>0;i--)
	 {
	 	printf("%d",stack[top]);
		 }	
	}


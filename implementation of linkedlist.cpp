#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
head=0;
int ch=1;
while(ch)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do u continue");
scanf("%d",&ch);
}
temp=head;
while (temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;	
}
return 0;
}
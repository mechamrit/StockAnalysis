#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;
}*start;
void main()
{
int ch,n,m,e,pos,i;
clrscr();
printf("program made by ankur\n");
start=NULL;
printf("1.create list\n");
printf("2.display list\n");
printf("3.insertion in beginning\n");
printf("4.insertion at end\n");
printf("5.insertion at specified location\n");
printf("6.delete first node\n");
printf("7.delete last node\n");
printf("8.delete at specified location\n");
printf("9.count\n");
printf("10.reverse\n");
printf("11.exit\n");
while(1)
{
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter number of nodes");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&m);
create_list(m);
}
break;
case 2:
display();
break;/*
case 3:
printf("enter element");
scanf("%d",&m);
addatbeg(m);
break;
case 4:
printf("enter element");
scanf("%d",&e);
addatend(e);
break;
case 5:
printf("enter the position");
scanf("%d",&e);
addatmid(e);
break;
case 6:
delatbeg();
break;
case 7:
delatend();
break;
case 8:
delatmid();
break;
case 9:
count();
break;
case 10:
rev();
break;/*
case 3:
exit();
default:
printf("wrong choice");
}
}
}
create_list(int data)/*
{
struct node *node,*new_node;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->info=data;
new_node->next=NULL;
if(start==NULL)
start=new_node;
else
{
node=start;
while(node ->next!= NULL)
node=node->next;
node->next=new_node;
}
}
display()
{
struct node *node;
if(start==NULL)
{
printf("list is empty\n");
return;
}
else
{
node=start;
printf("list is:\nstart->");
while(node!=NULL)
{
printf("%d->",node->info);
node=node->next;
}
printf("\n");
}
}
addatbeg(int data)
{
struct node *new_node;
new_node=malloc(sizeof(struct node));
new_node->info=data;
new_node->next=start;
start=new_node;
}
addatend(int data)
{
struct node *node,*new_node;
new_node=malloc(sizeof(struct node));
new_node->info=data;
node=start;    /*
while(node->next!=NULL)
{
node=node->next;
}
new_node->next=node->next;
node->next=new_node;
}
addatmid(int position)
{
struct node *node,*new_node;
int k,count;
new_node=malloc(sizeof(struct node));
node=start;
printf("enter the element");
scanf("%d",&k);
count=1;
new_node->info=k;
while(count<position-1)
{
node=node->next;
count++;
}
new_node->next=node->next;
node->next=new_node;
}
delatbeg()
{
struct node *node;
node=start;
if(node==NULL)
{
printf("underflow");
exit();
}
else
{
start=node->next;
free(node);/*
}
}
delatend()
{
struct node *node;
node=start;
if(node==NULL)
{
printf("underflow");
exit();
}
else
{
while(node->next->next!=NULL)
{
node=node->next;
}
node->next=NULL;
free(node->next->next);
}
}
delatmid()
{
struct node *node;
int count,k;
node=start;
count=1;
printf("enter the node to delete");
scanf("%d",&k);
if(node==NULL)
{
printf("underflow");
exit();
}
else
{
while(count<k-1)
{
node=node->next;
count++;
}
node->next=node->next->next;
}
}
count()
{
struct node *node=start;
int cnt=0;
while(node!=NULL)
{
node=node->next;
cnt++;
}
printf("the number of elements are %d\n",cnt);
}
rev()
{
struct node *p1,*p2,*p3;
if(start->next==NULL)
return;
p1=start;
p2=p1->next;
p3=p2->next;
p1->next=NULL;
p2->next=p1;
while(p3!=NULL)
{
p1=p2;
p2=p3;
p3=p3->next;
p2->next=p1;

}
start=p2;
}


















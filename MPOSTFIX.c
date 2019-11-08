#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[50];
int top=-1,size=50;
char infix[50],postfix[50];
void push(char stack[],char val)
{
if(top==size-1)
printf("\nstack overflow");
else
{
top++;
stack[top]=val;
}
}
char pop(char stack[])
{
char val=' ';
if(top==-1)
printf("\nstack underflow");
else
{
val=stack[top];
top--;
}
return val;
}
void infixtopost(char given[],char update[])
{
int i=0,j=0;
char flag;
strcpy(update," ");
while(given[i]!='\0')
{
if(given[i]=='(')
{
push(stack,given[i]);
i++;
}
else if(given[i]==')')
{
while((top!=-1)&&(stack[top]!='('))
{
update[j]=pop(stack);
j++;
}
if(top==-1)
{
printf("\n incorrect expression");
return;
}
flag=pop(stack);
i++;
}
else if(given[i]=='^'||given[i]=='+'||given[i]=='-'||given[i]=='*'||given[i]=='/'||given[i]=='%')
{
while((top!=-1)&&(stack[top]!='(')&&(priority(stack[top])>priority(given[i])))
{
update[j]=pop(stack);
j++;
}
push(stack,given[i]);
i++;
}
else if(isalnum(given[i]))
{
update[j]=given[i];
j++;
i++;
}
else
{
printf("\n incorrect element");
}
}
while((top!=-1)&&(stack[top]!='('))
{
update[j]=pop(stack);
j++;
}
update[j]='\0';
}
int priority(char sym)
{
if(sym=='^')
return 3;
else if(sym=='/'||sym=='%'||sym=='*')
return 2;
else if(sym=='+'||sym=='-')
return 1;
else
return 0;
}

void main()
{
clrscr();
printf("*****CONVERSION OF INFIX TO POSTFIX EXPRESSION*****");
printf("\n            *****MADE BY ANKUR******");
printf("\nENTER INFIX EXPRESSION:\n");
gets(infix);
strcpy(postfix," ");
infixtopost(infix,postfix);
printf("\nPOSTFIX EXPRESSION:\n");
puts(postfix);
getch();
}



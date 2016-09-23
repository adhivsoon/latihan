#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define size 5

struct stack
{

int a[size];
int top;
};

typedef struct stack STACK;

void push(STACK *p,int value) /* PUSH OPERATION */
{
if(p->top==size-1)
cout<<"STACK IS FULL ";
else
p->a[++p->top]=value;
}

int pop(STACK *p) /* POP OPERATION */
{
if (p->top==-1)
{
cout<<"STACK IS EMPTY";

return -1;
}
else
return p->a[p->top--];
}


void display (STACK *p) /*DISPLAY OPERATION */
{ int i;
if(p->top==-1)
cout<<"\n STACK IS EMPTY\n";
else
cout<<"\nSTACK is\n";
for (i=p->top;i>=0; --i)
cout<<p->a[i]<<"\n";
}


void main()
{

STACK s ;
int x,c,i;
s.top=-1;
do
{
cout<<"\n1: To PUSH\n";
cout<<"2: To POP\n";
cout<<"3: To Display\n";
cout<<"4: To Destroy\n";
cout<<"5: To Exit\n";
cout<<"\n\n Enter Choice\n";cin>>c;

switch(c)
{
case 1: cout<<"\nEnter Element: ";cin>>x;
push (&s,x);
break;
case 2: x=pop(&s);
if(x!=-1)
cout<<"\nElement deleted="<<x;
break;
case 3: display(&s);
break;
case 4: if(s.top==-1)
printf("\nSTACK IS EMPTY\n");
else
printf("\nSTACK is destroying\n"); /*

STACK DESTROY */
for (i=s.top;i>=0; --i)
printf("element destroyed are %d\n",pop(&s));
s.top=-1;
} printf("\nSTACK DESTROYED\n");
}while(c!=5);
}

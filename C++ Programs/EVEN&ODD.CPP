#include<stdio.h>
#include<process.h>
void main()
{
system("cls");
int a,c,d;
/*
c=a/2;
d=a%2;
printf("q=%d\tr=%d\n",c,d); */
printf("\nEnter a number ");
scanf("%d",&a);
c=a%2;
if(c==0)
{
printf("\nEven\n");
}
else
printf("\nOdd\n");
system("pause");
}
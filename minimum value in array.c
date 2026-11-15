#include<stdio.h>
void main()
{
int num[5],i,min;

printf("enter the vaues: ");
for(i=0;i<5;i++)
scanf("%d",&num[i]);

min=num[0];
for(i=0;i<5;i++)
{
if(num[i]<min)
{
min=num[i];
}
}

printf("minimum value=%d",min);

}

#include<stdio.h>
void main()
{
int num[5],i,s;

printf("enter the values: ");
for(i=0;i<5;i++)
scanf("%d",&num[i]);

for(i=0;i<5;i++)
s+=num[i];

printf("sum=%d",s);

}

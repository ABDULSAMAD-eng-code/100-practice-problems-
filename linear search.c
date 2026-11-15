#include<stdio.h>
void main()
{
int num[5],i,key,s;

printf("enter the vaues: ");
for(i=0;i<5;i++)
scanf("%d",&num[i]);

printf("enter key value: ");
scanf("%d",&key);

for(i=0;i<5;i++)
{
if(key==num[i])
{
s=1;
break;
}
}
if(s==1)
printf("element is found at %d ",i+1);
else
printf("element not found!!");

}

#include<stdio.h>
int main()
{
int n,hex=0,i=1,rem,j=0;
char arr[20];
printf("enter decimal number : ");
scanf("%d",&n);
while(n != 0)
{
rem=n%16;
if(rem==10)
    rem='A';
    else
    if(rem==11)
    rem='B';
    else
    if(rem==12)
    rem='C';
    else
    if(rem==13)
    rem='D';
    else
    if(rem==14)
    rem='E';
    else
    if(rem==15)
    rem='F';
    hex=hex+rem*i;
n=n/16;
i=i*10;
   arr[j] =rem;
   j++;
}
printf("hex=%s",arr);
return 0;
}

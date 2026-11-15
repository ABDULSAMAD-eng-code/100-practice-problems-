#include<stdio.h>
int main ()
{
int a,b,A,S,M,D,R;
printf("enter the first value\n");
scanf("%d",&a);
printf("enter the second value\n");
scanf("%d",&b);
A=a+b;
S=a-b;
M=a*b;
D=b/a;
R=b%a;
printf("Addition=%d\n",A);
printf("Subtraction=%d\n",S);
printf("Multiplication=%d\n",M);
printf("Division=%d\n",D);
printf("Remainder=%d\n",R);
return 0;
}

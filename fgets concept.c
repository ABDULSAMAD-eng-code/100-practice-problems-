#include<stdio.h>
void main()
{
char s[20];

printf("enter a string : ");
fgets(s , sizeof(s), stdin);
puts(s);
}

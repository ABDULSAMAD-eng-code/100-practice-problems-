#include<stdio.h>
#include<strings.h>
void main()
{
char s1[20], s2[20];

printf("enter a string 1 : ");
gets(s1);
printf("enter a string 2 : ");
gets(s2);
puts(s1);
puts(s2);
printf("the length of the string is = %d",strlen(s1));

printf("\nconcatination %s",strcat(s1,s2));
printf("\ncopy s2 in s1 =%s",strcpy(s1,s2));
printf("\ncomparision %d", strcmp(s1,s2));
}

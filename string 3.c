#include<stdio.h>
void main()
{
char str[20]="programming";

char *p = str;

while(*p != '\0')
{
printf("%c",*p);
p++;
}

}

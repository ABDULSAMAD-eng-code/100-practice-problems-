// call by value
#include<stdio.h>
void swap(int x , int y);
void main()
{
  int x =10, y =6;
  printf("before swap x=%d,y=%d,x,y");
  swap (x,y);
  printf("after swap x=%d,y=%d,x,y");
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swap in funtion x=%d , y=%d",x,y);
}

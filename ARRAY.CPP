#include<stdio.h>
#include<conio.h>
void main(void)
{
 int a[]={10,20,39};
 int b,c,i;
 b=sizeof(a);
 c=b/2;
 i=1;
 while(i<c)
 {
  printf("%d\n",a);
  i++
 }
}



#include<stdio.h>
int main()
{
int a,b,ch;
printf("enter the a,b value");
scanf("%d%d",&a,&b);
printf("1.add");
printf("2.sub");
printf("3.mul");
printf("4.div");
printf("enter your ch");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a*b);
break;
case 4:
printf("%d",a/b);
break;
default:
printf("nothing");
}
}

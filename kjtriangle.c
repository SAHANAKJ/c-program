/*tri*/
#include<stdio.h>
void main()
{
int a,b,c;
printf("entr the three idea\n");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)||(b+c>a))
printf("triangle is valid\n");
else
printf("triangle is not valid\n");
}

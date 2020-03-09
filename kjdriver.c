/*insured*/
#include<stdio.h>
void main()
{
int age;
char ms,g;
printf("enter the age,ms,g\n");
scanf("%d %c %c",&age,&ms,&g);
if(ms=='m')
printf("insured\n");
else if(ms=='u'&&age>25 &&g=='f')
printf("insured\n");
else if(ms=='u'&&age>30 &&g=='m')
printf("isured\n");
else 
printf("not insured\n");
}

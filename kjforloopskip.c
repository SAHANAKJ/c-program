#include<stdio.h>
int main()
{
int counter,i;
for(counter=0,i=0;counter<=10,i<=10;counter++,i++)
{
if(counter==5)
{
continue;
}

printf("%d\n,\n%d",counter,i);
}
}

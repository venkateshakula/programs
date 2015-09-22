#include<stdio.h>
main()
{
int i,j,n=4,p=2;
for(i=0;i<n;i++)
{
if(p==2)
{
for(j=0;j<n;j++)
{
printf("hello1 \n");
break;
}
printf("hello2 \n");
}
printf("hello3 \n");
}
printf("hello4 \n");
}


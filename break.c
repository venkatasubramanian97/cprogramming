#include<stdio.h>
int main()
{
int a=5;
for(a=1;a>0;a++)
{
printf("value of a is : %d\n",a);
if(a==11)
{
	break;
}
}
printf("break - value of a is : %d\n",a);
return 0;
}
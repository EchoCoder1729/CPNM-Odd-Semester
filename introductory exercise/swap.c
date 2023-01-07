#include <stdio.h>
int main()
{
	int a,b,c ;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b ;
	a=c-a;
	b=c-b;
	printf("The swapped numbers are : %d and %d\n",a,b);
	return 0;
}

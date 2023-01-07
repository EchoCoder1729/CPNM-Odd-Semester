#include <stdio.h>
int main()
{
	int a,b,c,s;
	printf("Enter time in seconds:");
	scanf("%d",&s);
	a=s/3600;
	s=s-a*3600;
	b=s/60;
	s=s-b*60;
	c=s;
	printf("%d hours %d minutes %d seconds\n",a,b,c);
	return 0;
}

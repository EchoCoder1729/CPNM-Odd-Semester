#include <stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter the fraction a/b as a b :");
	scanf("%d %d",&a,&b);
	for (i=a; i>1 ; i--)
	{
		if (a%i==0 & b%i==0)
		{
			c=i;
			break;
		}
		else
		{
			c=1;
		}
	}
	a=a/c;
	b=b/c;
	printf("Simplest form of the fraction is : %d/%d\n",a,b);
	return 0;
}

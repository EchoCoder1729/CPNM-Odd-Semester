#include <stdio.h>
int main()
{
	float a,b,c,x,y,z;
	int s;
	printf("Do you want to enter side(0) or angles(1) ?");
	scanf("%d",&s);
	if (s==0)
	{
	printf ("Enter the 3 sides");
	scanf ("%f %f %f",&a,&b,&c);
	if (a+b > c & b+c > a & a+c > b)
	{ printf("Triangle is possible"); }
	else { printf ("Triangle is not possible"); }
	}
	else
	{
	printf("Enter the 3 angles");
	scanf ("%f %f %f",&x,&y,&z);
	if (x+y+z ==180)
	{ printf ("Triangle is possible");}
	else { printf ("Triangle is not possible"); }
	}
	return 0;
}
	


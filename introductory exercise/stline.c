#include <stdio.h>
int main()
{
	int a,b,x,y,p,q,slope1,slope2,slope3;
	printf("Enter point 1:");
	scanf ("%d %d",&a,&b);
	printf("Enter point 2:");
	scanf ("%d %d",&x,&y);
	printf("Enter point 3:");
	scanf ("%d %d",&p,&q);
	slope1= (y-b)/(x-a);
	slope2= (q-y)/(p-x);
	slope3= (q-b)/(p-a);
	if (slope1==slope2 & slope2==slope3 & slope1==slope3)
	{
		printf("The points fall on a straight line");
	}
	else
	{
		printf("The points are not on a straight line\n");
	}
	return 0;
}

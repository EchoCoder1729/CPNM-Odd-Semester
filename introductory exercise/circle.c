#include <stdio.h>
#include <math.h>
int main()
{
	int h,k,r,x,y;
	printf("Enter the coordinates of center of circle:");
	scanf("%d %d",&h,&k);
	printf("Enter radius of the circle:");
	scanf("%d",&r);
	printf("Enter the coordinates of a point:");
	scanf("%d %d",&x,&y);
	if (sqrt(pow((x-h),2)+pow((y-k),2)) < r)
	{
		printf("Point is inside the circle\n");
	}
	else if (sqrt(pow((x-h),2)+pow((y-k),2)) == r)
	{
		printf("Point is on the circle\n");
	}
	else
	{
		printf("Point is outside the circle\n");
	}
	return 0;
}
	
	

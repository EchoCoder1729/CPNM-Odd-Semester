#include <stdio.h>
int main()
{
	int sum, n , temp , i;
	sum = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=0 ; i <3 ; i++)
	{
	temp = n%10 ; 
	n = n/10 ;
	sum = sum + temp ;
	}
	printf("The sum of digits is %d\n",sum);
	return 0;
}

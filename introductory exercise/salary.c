#include <stdio.h>
int main()
{
	float a,b ;
	printf ("Enter your base salary :");
	scanf ( "%f", &a);
	b = a + 0.6 * a + 0.15 * a ;
	printf("Gross salary is: %f\n",b) ;
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b,c,d,e ;
	float f;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	if ( a > b )
	{
	c = a+b ;
	a= c-a;
	b= c-b;
	}
	f=b/(a*1.0) ;
	d= b/a ;
	e= b%a ; 
	printf ("%d divided by %d shall yeild %d + %d/%d and %f\n",b,a,d,e,a,f);
	return 0;
}

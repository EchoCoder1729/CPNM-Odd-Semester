#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		sum+=i;
	printf("Sum: %d\n",sum);
	
	int sum1=0;
	for (int j=1;j<=n;j++)
		sum1+=j*(j+1);
	printf("Sum of cons digit: %d\n",sum1);
	
	int fact=1,sum2=0;
	for (int i=1;i<=n;i++){
		fact*=i;
		sum2+=fact;
	}
	printf("Sum of factorials: %d\n",sum2);
	
	int sum4,sum3=0;
	for (int i=1;i<=n;i++){
		sum4=0;
		for (int j=1;j<=i;j++){
			if (i%j==0)
				sum4+=j;
		}
		
		sum3+=sum4;
		
	}
	printf("Sum of @s is %d\n",sum3);
			
	return 0;
}

#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The numbers b/w 1 and 100 divisible by %d are ",n);
	for (int i=1; i<101; i++)
		if (i%n==0)
			printf("%d ",i);
	printf("\n");
	printf("The prime numbers between 1 and %d are",n);
	int dum;
	for (int j=2; j<=n; j++){
		dum=1;
		for (int k=2; k<j;k++)
			if (j%k==0)
				dum=0;
		if (dum)
			printf("%d ",j);
	}
	printf("\n");
	printf("The prime factors of %d are",n);
	for (int l=2;l<=n;l++){
		if (n%l==0){
			dum=1;
			for (int k=2; k<l;k++)
				if (l%k==0)
					dum=0;
			if (dum)
				printf("%d ",l);
		}
	}
	printf("\n");
	printf("Octal equivalent : %o\n",n);
	m=n;
	int sum=0;
	while (m>0){
		sum=sum+(m%10);
		m=m/10;
	}
	printf("Sum of digits %d\n",sum);
	
	int fact=1;
	for (int i=1;i<=n;i++){
		fact*=i;
	}
	printf("Factorial is %d\n",fact);
	m=n;
	int rev=0;
	while (m>0){
		rev=rev*10+(m%10);
		m=m/10;
	}
	printf("The reverse of %d is %d\n",n,rev);
	return 0;
}	
	
		
				
		
	

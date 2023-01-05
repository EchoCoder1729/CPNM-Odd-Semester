#include<stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
//	int n=4;
	long a=1;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++)
			printf(" ");
		printf("%ld",a*a);
		a=a*10+1;
	printf("\n");
	}
	return 0;
}

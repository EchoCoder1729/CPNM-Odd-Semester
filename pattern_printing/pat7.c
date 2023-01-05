#include<stdio.h>
int main(){
//	int n;
//	scanf("%d",&n);
	int n=4;
	int a=1;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++)
			printf(" ");
		printf("%d",a*a);
		a=a*10+1;
	printf("\n");
	}
	a/=100;
	for (int i=n-1;i>0;i--){
		for (int j=1;j<=n-i;j++)
			printf(" ");
		printf("%d",a*a);
		a/=10;
	printf("\n");
	}
	return 0;
}

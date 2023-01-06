#include<stdio.h>
int main(){
	void Binary(int n){
		int d=n%2;
		if (n>=2)
			Binary(n/2);
		printf("%d",d);
	}
	int sum=0;
	void Sum(int n){
		sum+=n%10;
		if (n>=10)
			Sum(n/10);
		else
			printf("%d",sum);
	}
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	Binary(a);
	printf("\n");
	Sum(a);
	printf("\n");
	return 0;
}
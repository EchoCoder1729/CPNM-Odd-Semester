#include<stdio.h>
int main(){
	int n,a=0,b=1,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("0,");
	for (int i=0;i<n;i++){
		printf("%d,\n",b);
		temp=b;
		b=a+b;
		a=temp;
	}
	return 0;
}

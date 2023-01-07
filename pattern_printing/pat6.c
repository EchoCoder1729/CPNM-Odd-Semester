#include<stdio.h>
int main(){
//	int n=4;
	int n;
	scanf("%d",&n);
	int temp1,temp2;
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++)
			printf(" ");
		for (int k=0;k<=i;k++){
			printf("+");
			temp1=k;
		}
		for (int l=temp1-1;l>=0;l--)
			printf("+");
	printf("\n");
	}
	for (int a=0;a<n-1;a++){
		for (int b=0;b<=a;b++)
			printf(" ");
		for (int c=0;c<n-a-1;c++){
			printf("+");
			temp2=c;
		}
		for (int d=temp2-1;d>=0;d--)
			printf("+");
	printf("\n");
	}
	return 0;
}

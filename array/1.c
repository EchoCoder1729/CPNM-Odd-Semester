#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array:\n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int temp=0;
	for (int i=0;i<(n+1)/2;i++){
		temp=a[i]+a[n-1-i];
		a[n-1-i]=temp-a[n-1-i];
		a[i]=temp-a[i];
		temp=0;
	}
	for (int j=0;j<n;j++)
		printf("%d",a[j]);
	printf("\n");
	return 0;
}

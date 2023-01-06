#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array ");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p;
	p=a;
//printing the array
	for (int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}	
	printf("\n");
//computing sum
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=*(p+i);
	}
	printf("Sum of elements is %d\n",sum);
	return 0;
}
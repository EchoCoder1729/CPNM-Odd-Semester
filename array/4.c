#include<stdio.h>
int main(){
	int n,a[100]={0};
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
// Finding max element
	int max=a[0];
	for (int i=0;i<n;i++){
		if (a[i]>max)
			max=a[i];
	}
//Finding the minimum element
	int min=a[0];
	for (int i=0;i<n;i++){
		if (a[i]<min)
			min=a[i];
	}
//Finding the range
	int range=0;
	range=max-min;
	printf("Range is : %d\n",range);
	return 0;
}
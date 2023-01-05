#include<stdio.h>
int main(){
	int n,a[100]={0};
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

//Basic Selection Sort Application
	int min,min_index,temp;
	for (int i=0;i<n-1;i++){
		min=a[i];
		min_index=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<min){
				min=a[j];
				min_index=j;
			}
		}
		temp=a[i]+a[min_index];
		a[min_index]=temp-a[min_index];
		a[i]=temp-a[i];
	}

	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
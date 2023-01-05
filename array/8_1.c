#include<stdio.h>
int main(){
	printf("Enter the order of the matrix :");
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int temp,k=0;
	for (int i=0;i<n;i++){
		for (int j=k;j<n;j++){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
		k++;
	}
	printf("The transpose of the matrix is :\n");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
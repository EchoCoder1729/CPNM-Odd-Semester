#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array:\n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);

	//Finding total number of duplicate elements
	int b[1000]={0},dup=0,c[100]={0},k=0;
	for (int j=0;j<n;j++){
		b[a[j]]+=1;
		if (b[a[j]]>1){
			dup+=1;
		}
		else{
			c[k]=a[j];
			k++;
		}
	}
	printf("Total number of duplicate elements : %d\n",dup);

	//Printing the unique array in reverse order
	int temp=0;
	for (int i=0;i<(k+1)/2;i++){
		temp=c[i]+c[k-1-i];
		c[k-1-i]=temp-c[k-1-i];
		c[i]=temp-c[i];
		temp=0;
	}
	for (int j=0;j<k;j++)
		printf("%d,",c[j]);
	printf("\n");

	return 0;
}
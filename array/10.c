#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	float a[n];
	for (int i=0;i<n;i++){
		scanf("%f",&a[i]);
	}

//Calculating the mean value

	float mean,sum=0;
	for (int i=0;i<n;i++){
		sum+=a[i];
	}
	mean = sum/n;

//Calculating the standard deviation
	sum=0;
	float sd;
	for (int i=0;i<n;i++){
		sum+= pow ((a[i]-mean),2);
	}
	sd = sqrt (sum/(n-1));

	printf("Standard deviation is %f\n",sd);
	return 0;
}
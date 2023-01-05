#include<stdio.h>
int main(){
	int a[7][10]={{0}};
	printf("Enter the roll numbers: ");
	for (int i=0;i<10;i++){
		scanf("%d",&a[0][i]);
	}
	for (int i=0;i<10;i++){
		printf("Enter the marks in 5 subjects for %d: ",a[0][i]);
		for (int j=1;j<6;j++){
			scanf("%d",&a[j][i]);
		}
	}
/*
	for (int i=0;i<10;i++){
		printf("Enter the name for %d",a[i]);
		scanf("%")
	}
*/
	int max,submax,top_index,subtop_index;
	for (int i=1;i<6;i++){
		submax=max=a[i][0];
		for (int j=0;j<10;j++){
			if (a[i][j]>max){
				max=a[i][j];
				top_index=j;
			}
		}
		for (int j=0;j<10;j++){
			if (max>a[i][j] & a[i][j]>submax){
				submax=a[i][j];
				printf("%d",a[i][j]);
				subtop_index=j;
			}
		}
		printf("Highest marks in subject %d is received by %d (marks %d)\n",i,a[0][top_index],max);
		printf("Second highest marks in subject %d is received by %d (marks %d)\n",i,a[0][subtop_index],submax);
	}
	return 0;
}
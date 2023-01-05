#include<stdio.h>
int main(){
	int temp1,temp2;
	int n=4;
	int m=1+(n-2)*2;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=m-i;j++)
			printf(" ");
		if (i%2!=0){
			for (int k=1;k<=(i+1)/2;k++){
				printf("%d ",k);
				temp1=k;
			}
			for (int l=temp1-1;l>0;l--)
				printf("%d ",l);
		}
		else {
			for (int a=1;a<=i/2;a++){
				printf("%d ",a);
				temp2=a;
			}
			for (int b=temp2;b>0;b--)
				printf("%d ",b);
		}
		printf("\n");
	}
	return 0;
}

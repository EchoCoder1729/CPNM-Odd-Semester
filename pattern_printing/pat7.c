#include<stdio.h>
int main(){
	int n,temp1,temp2;
	scanf("%d",&n);
//	int n=4;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++)
			printf(" ");
		for (int k=1;k<=i;k++){
			printf("%d",k);
			temp1=k;
		}
		for (int l=temp1-1;l>0;l--)
			printf("%d",l);
	printf("\n");
	}
	for (int i=n-1;i>0;i--){
		for(int j=n-i;j>0;j--)
			printf(" ");
		for (int k=1;k<=i;k++){
			printf("%d",k);
			temp2=k;
		}
		for (int l=temp2-1;l>0;l--)
			printf("%d",l);
	printf("\n");
	}
	
	return 0;
}

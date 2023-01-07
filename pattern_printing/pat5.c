#include<stdio.h>
int main(){
//	int n=4;
	int n;
	scanf("%d",&n);
	int j=n+1;
	while (j>0){
		for (int i=0;i<j;i++)
			printf("%d ",n-i);
		n-=1;
		j-=2;
		printf("\n");
	}
	return 0;
}

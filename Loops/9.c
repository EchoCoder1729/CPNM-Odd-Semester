#include<stdio.h>
int main(){
	printf("Enter a number ");
	int n;
	scanf("%d",&n);
	int i=1,temp=3,sum=1;
	while (1){
		if (sum==n){
			printf("%d\n",i);
			break;
		}
		sum+=temp;
		temp+=2;
		i+=1;
	}
	return 0;
}
		

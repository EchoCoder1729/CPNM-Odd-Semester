#include<stdio.h>
#include<math.h>
int main(){
	int sum=0;
	for (int i=1;i<501;i++){
		sum=0;
		int c=i;
		while(c){
			sum+=pow((c%10),3);
			c=c/10;
			
		}
		if (sum==i){
			printf("%d\n",i);
		}
	}
	return 0;	
}	

#include<stdio.h>
#include<math.h>
int main(){
	int i=0;
	int k=0;
	while (i<10){
		k++;
		int c=k;
		for (int j=0;j<100;j++){
			int sum=0;
			while(c){
				sum+=pow((c%10),2);
				c=c/10;
			}
			c=sum;
			if (sum==1){
				printf("Happy Number is %d\n",k);
				i++;
				break;
			}
		}
	}
	return 0;
}
				
			
			
		

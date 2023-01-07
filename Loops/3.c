#include <stdio.h>
int main()
{
	int a[9]={0};
	for (int i=100;i<=999;i++){
		int a[9]={0};
		int j=i;
		while (j>0){
			a[j%10]+=1;
			j=j/10;
		}
		if (a[1]==1 & a[2]==1 & a[3]==1)
			printf("%d\n",i);
	}
	return 0;
}
		
			
	

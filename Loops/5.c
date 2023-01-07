#include<stdio.h>
#include<math.h>
int main(){
	float n,res=0;
	char m;
	printf("Emter the value of the angle and unit(d/r) :");
	scanf("%f %c",&n,&m);
	if (m=='d')
		n=n*(3.14/180);
	int j=0,fact=1;
	for (int i=1;i<10;i+=2){
		res+= (pow(-1,j) * pow(n,i))/fact;
		j++;
		fact=fact*(i+1)*(i+2);
	}
	printf("Result is %f\n",res);
	return 0;
}

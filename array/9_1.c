#include<stdio.h>
int main(){
//inputting the number and putting in an array
	int a[4]={0},ip,n,out,x;
	printf("Enter any 4-digit number containing atleast 2 different digits : ");
	scanf("%d",&ip);
	out=ip;
while (out != x){
	x=out;
	n=x;
//Putting the number in an array
	for (int i=0;i<4;i++){
		a[i]=n%10;
		n=n/10;
	}
//All same digits
	if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3]){
		printf("!ERROR! Atleast 2 distict digits needed\n");
		return 0;
	}
//Sorting in ascending order
	int min,min_index,temp;
	for (int i=0;i<3;i++){
		min=a[i];
		min_index=i;
		for (int j=i+1;j<4;j++){
			if (a[j]<min){
				min=a[j];
				min_index=j;
			}
		}
		temp=a[i]+a[min_index];
		a[min_index]=temp-a[min_index];
		a[i]=temp-a[i];
	}
//Sorting in descending order in array b
	int b[4]={0};
	for (int i=0;i<4;i++){
		b[i]=a[3-i];
	}
//Creating the smaller number
	int small=0;
	for (int i=0;i<4;i++){
		small=small*10+a[i];
	}
//Creating the bigger number
	int big=0;
	for (int i=0;i<4;i++){
		big=big*10+b[i];
	}
	out = big -small;
}
	printf("%d\n",out);
	return 0;
}
#include<stdio.h>
int main(){
//Counting charecters
	char str[1000];
	scanf("%[^\n]s",str);
	int count=0;
	for (int i=0;str[i]!='\0';i++){
		if (str[i]!=' ')
			count++;
	}
	printf("Total number of chars : %d\n",count);
//finding the length of the string
	int len=0;
	for (int i=0;str[i]!='\0';i++)
		len++;
//reversing the string

	for (int j=len-1;j>-1;j--){
		putchar(str[j]);
	}
	printf("\n");
		
	return 0;
}
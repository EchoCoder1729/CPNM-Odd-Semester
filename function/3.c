#include<stdio.h>
int main(){
	char str[1000];
	scanf("%[^\n]s",str);
	printf("The initials are: ");
	putchar(str[0]);
	for (int i=0;str[i]!='\0';i++){
		if (str[i]==' ')
			putchar(str[i+1]);
	}
	printf("\n");
	return 0;
}
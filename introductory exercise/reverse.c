#include<stdio.h>
 
void rev(char *str){
	if (*str) {
		rev(str + 1);
		putchar(*str);
	}
}
 
int main(void){
	char s[100];
	scanf("%[^\n]s", s);
	rev(s);
	return 0;
}

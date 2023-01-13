#include<stdio.h>
int main(){
	void squeeze(char *s,char c){
		for (int i=0;s[i]!='\0';i++){
			if (s[i]==c){
				continue;
			}
			else 
				printf("%c",s[i]);
		}
		printf("\n");
	}
	char s[1000];
	printf("Enter the string ");
	fgets(s,1000,stdin);
	printf("Enter the charecter to remove ");
	int c;
	while ((c=getchar())!=EOF && c != '\n'){
		squeeze(s,c);
	}
	return 0;
}
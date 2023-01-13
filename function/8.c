#include<stdio.h>
void split(char *str){

}
void reverse(char *str,int a){
	if (str[a]!='\0')
		reverse(str,a+1);
	printf("%c",str[a]);
}
int main(){
	char s[1000];
//	scanf("%[^\n]s",s);
	fgets(s,1000,stdin);
	char temp[1000][100];
	int j=0,k=0;
	for (int i=0;s[i]!='\0';i++){
		if (s[i]==' ' || s[i]=='\n'){
			temp[j][k]='\0';
			k=0;
			reverse(temp[j],0);
			printf(" ");
			j++;
		}
		temp[j][k]=s[i];
		k++;
	}
	printf("\n");
	return 0;
}
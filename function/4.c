#include<stdio.h>
int main(){
	char str[1000];
	scanf("%[^\n]s",str);
	int count=0;
	char s,t;
	for (int i=0;str[i]!='\0';i++){
		s=str[i];
		if (s=='A' || s=='a' || s=='E' || s=='e' || s=='I' || s=='i' || s=='O' || s=='o' || s=='U' || s=='u'){
			t=str[i+1];
			if (t=='A' || t=='a' || t=='E' || t=='e' || t=='I' || t=='i' || t=='O' || t=='o' || t=='U' || t=='u')
				count++;
		}
	}
	printf("Occurences : %d\n",count);
	return 0;
}
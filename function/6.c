#include<stdio.h>
int main(){
	char str[1000];
	printf("Enter a string : ");
	scanf("%[^\n]s",str);

//finding the length of the string
	int len=0;
	for (int i=0;str[i]!='\0';i++)
		len++;
//reversing the string
	char s[1000];
	int i=0;
	for (int j=len-1;j>-1;j--){
		s[i]=str[j];
		i++;
	}
	s[i]='\0';

//finding palindrome
	int palin=0;
	for (int k=0;str[k]!='\0';k++){
		if (str[k]==s[k])
			palin=1;
		else {
			palin=0;
			break;
		}
	}
	if (palin) printf("Palindrome\n");
	else printf("Not Palindrome\n");

//Counting number of charecters in the string
	printf("Number of charecters: %d",len);
	printf("\n");
//counting number of words in the string
	unsigned word=0;
	for (int k=0;s[k]!='\0';k++){
		if (s[k]==' ')
			word++;
	}
	word++;
	printf("Number of words: %u",word);
	printf("\n");
	return 0;
}

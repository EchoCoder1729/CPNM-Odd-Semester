#include<stdio.h>
int main(){
//string to integer
	char str[1000];
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	int num=0,temp;
	for (int i=0;str[i]!=0;i++){
		temp=str[i]-'0';
		num=num*10+temp;
	}
	printf("%d\n",num);

//integer to string
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	char s[100];
	int a[100];
	int i;
	for (i=0;n>0;i++){
		a[i]=n%10;
		n=n/10;
	}
	for (int j=0;j<i;j++){
		s[j]=a[i-1-j]+'0';
	}
	s[i]='\0';
	puts(s);
	return 0;
}
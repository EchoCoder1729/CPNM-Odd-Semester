#include<stdio.h>
int main(){
	int len(char *str){
		int count=0;
		for (int i=0;str[i]!='\0';i++){
			count++;
		}
		return count;
	}
	int strend(char *s,char *t){
		//check is the boolean variable
		int check=0;
		int len1=len(s);
		int len2=len(t);
//		printf("%d*%d",len1,len2);
		int i=len1-1;
		for (int j=len2-1;j>-1;j--){
//			printf("%c!%c",s[i],t[j]);
			if (s[i]==t[j]){
				check=1;
			}
			else{
				check=0;
				break;
			}
			i--;
		}
		if (check){
			return 1;
		}
		else
			return 0;
	}
	char str1[1000],str2[1000];
	printf("Enter the string ");
	fgets(str1,1000,stdin);
	printf("Enter the end string to check ");
	fgets(str2,1000,stdin);
	int res =strend(str1,str2);
	printf("Result is %d\n",res);
	return 0;
}
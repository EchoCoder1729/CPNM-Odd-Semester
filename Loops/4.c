 #include<stdio.h>
int main(){
	int n=0,a[50],c,b[50];
	int in,op;
	printf("Enter input base binary(b),octal(o),decimal(d),hexadecimal(x):");
	while ((in=getchar()) != EOF && in !='\n'){
		printf("Enter the number:");
		switch(in){
//		case 'b' :while ((c=getchar()) != EOF && c !='\n'){n+=c-'0'; n=n<<1;} n=n>>1;printf("%c",c);break;
//		case 'b': scanf("%d",&c);while(c){n+=(c%10);n=n<<1;c=c/10;}n=n>>1;break;
		case 'b': scanf("%d",&c);int z=0; while(c){b[z]=(c%10);c=c/10;z+=1;if (c!=0 & c!=1){printf("!ERROR!\n");return 0;}}
		for (int g=z;g>=0;g--){n+=b[g];n=n<<1;}n=n>>1;break;
		case 'o' : scanf("%o",&n);c=n;break;
		case 'd' : scanf("%d",&n);break; case 'x' : scanf("%x",&n);break;
		default : printf("invalid1");return 0;break;
		}
//	printf("%d",n);
	}
	printf("Enter output base binary(b),octal(o),decimal(d),hexadecimal(x):");
	while ((op=getchar()) != EOF && op !='\n'){
		switch(op){
		case 'b' :;
		int i=0;
		while(n){
			a[i]=n&1;
			n=n>>1;
			i++;
		}
//		for (int j=0;j<i;j++){
//			printf("%d",a[j]);
//		}
		for (int j=i-1;j>-1;j--){
			printf("%d",a[j]);
		}
		break;
		case 'o' : printf("%o",n); break; case 'd' : printf("%d",n); break; case 'x' : printf("%x",n); break;
		default : printf("invalid2"); break;
		}
	}
	printf("\n");
	return 0;
}

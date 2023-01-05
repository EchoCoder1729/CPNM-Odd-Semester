#include<stdio.h>
int main(){
	int a[3][3]={{0}};
	printf("Enter the first matrix\n");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter the second matrix\n");
	int b[3][3]={{0}};
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	printf("Do you want to sum(s), difference(d), product(p) ?");
	int c[3][3]={{0}};
	int ip;
	getchar();
	while ((ip=getchar())!= EOF && ip !='\n'){
		switch(ip){
			case 's':
				
				for (int i=0;i<3;i++){
					for (int j=0;j<3;j++){
						c[i][j]+=(a[i][j]+b[i][j]);
					}
				}
				break;
			case 'd':
				
				for (int i=0;i<3;i++){
					for (int j=0;j<3;j++){
						c[i][j]+=(a[i][j]-b[i][j]);
					}
				}
				break;
			case 'p':
				
				for (int i=0;i<3;i++){
					for (int j=0;j<3;j++){
						for (int k=0;k<3;k++)
							c[i][j]+=(a[i][k]*b[k][j]);
					}
				}
				break;
			default : printf("Invalid choice");return 0;break;
		}
	}
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
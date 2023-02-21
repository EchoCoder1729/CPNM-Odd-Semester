#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_SIZE 4
//int m,n;
void matrix(float a[MAX_SIZE][MAX_SIZE+1]){
	for (int i=0;i<MAX_SIZE;i++){
		for (int j=0;j<MAX_SIZE+1;j++){
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
}
void gauss_elimination(float a[MAX_SIZE][MAX_SIZE+1],int n){
	//forward elimination
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			float f= a[j][i]/a[i][i];
			for (int k=i;k<n;k++){
				a[j][k]=a[j][k]-f*a[i][k];
			}
			a[j][MAX_SIZE]-=f*a[i][MAX_SIZE];
		}
	}
//	matrix(a);
//Checking for inconsistent solutions
	int singular=0;
	for(int k=0;k<n;k++){
		if (a[k][k]==0)
			singular=1;
		else
			singular=0;
	}
	if (singular){
		printf("Singluar Matrix, Aborting");
		exit(0);
	}
	//back substitution
	float x[MAX_SIZE];
	x[n-1]=a[n-1][MAX_SIZE]/a[n-1][n-1];
	for (int k=n-2;k>=0;k--){
		x[k]=a[k][MAX_SIZE];
		for (int j=n-1;j>k;j--){
			x[k]-=a[k][j]*x[j];
		}
		x[k]/=a[k][k];
	}
	printf("\nSolution of the system of equations:\n");
	for(int k=0;k<n;k++){
		printf("x[%d] = %f\n",k,x[k]);
	}
}

void gauss_jordan(float a[MAX_SIZE][MAX_SIZE+1],int n){
	for (int i=0;i<n;i++){
//swapping of the ith and the i+1th row
		int j=i+1;
		while (a[i][i]==0 && j<n){
			float temp;
			for (int k=0;k<n;k++){
				temp=a[i][k];
				a[i][k]=a[j][k];
				a[j][k]=temp;
			}
			j++;
		}
		float f=a[i][i];
		for (int k=0;k<n;k++){
			a[i][k]/=f;
		}
		a[i][MAX_SIZE]/=f;
		for (int p=0;p<n;p++){
			if (p!=i){
				float g= a[p][i];
				for (int k=0;k<n;k++){
					a[p][k]-=a[i][k]*g;
				}
				a[p][MAX_SIZE]-=a[i][MAX_SIZE]*g;
			}
		}
	}
//	matrix(a);
	printf("\nSolution of the system of equations:\n");
	for(int k=0;k<n;k++){
		printf("x[%d] = %f\n",k,a[k][MAX_SIZE]);
	}
}

void jacobi_method(float a[MAX_SIZE][MAX_SIZE+1], float x[MAX_SIZE], int n, float eps, int max_iterations)
{
	float x_temp[MAX_SIZE];
	for (int i=0;i<max_iterations;i++){
		//j is for different equations
		for (int j=0;j<n;j++){
			float sum=a[j][MAX_SIZE];
			//k is for dealing in the same equation
			for (int k=0;k<n;k++){
				if (j!=k){
					sum=sum-a[j][k]*x[k];
				}
			}
			x_temp[j]=sum/a[j][j];
		}
		int converged,big =0;
		float temp;
		for(int k=0;k<n;k++){
//			temp=fabs((x_temp[k]-x[k])/x_temp[k]);
			temp=fabs((x_temp[k]-x[k]));
			if (temp<eps){
				converged=1;
			}
			else
				converged=0;
		}
		if (converged){
			printf("\nSolution of the system of equations:\n");
			for(int k=0;k<n;k++){
				printf("x[%d] = %f\n",k,x[k]);
			}
			printf("Number of iterations: %d\n",i);
		    return;
		}
		for (int k=0;k<n;k++){
			x[k]=x_temp[k];
		}
	}
	printf("\nSolution not converged within %d iterations.\n",max_iterations);
}

int main()
{
    int i,j,n,max_iterations;
    float a[MAX_SIZE][MAX_SIZE+1]={0}, x[MAX_SIZE]={0}, eps;
    
    printf("Enter the number of equations: ");
    scanf("%d",&n);
    
    printf("Enter the coefficient matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    
    printf("Enter the constant terms:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i][MAX_SIZE]);
    }
    getchar();
    int choice;
    printf("Enter your choice of method :\n1.Gauss Elimination\n2.Jocobi's method\n3.Gauss Pivotal method\n");
    choice = getchar();
    switch(choice){
    	case '1': gauss_elimination(a,n); break;
    	case '2': 
    		printf("Enter the initial values of x:\n");
		    for(i=0;i<n;i++)
		    {
		        scanf("%f",&x[i]);
		    }
		    printf("Enter the tolerance: ");
		    scanf("%f",&eps);
		    printf("Enter the maximum number of iterations: ");
		    scanf("%d",&max_iterations); 
		    jacobi_method(a,x,n,eps,max_iterations); break;
    	case '3': gauss_jordan(a,n); break;
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX_SIZE 10

void lagrange(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0);

void forward_diff(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0);

void backward_diff(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0);

int factorial(int n);

int main()
{
    int i,n;
    float x[MAX_SIZE], y[MAX_SIZE], x0;
    
    printf("Enter the number of data points: ");
    scanf("%d",&n);
    
    printf("Enter the data points:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
    }
    
    printf("Enter the value of x at which the function is to be interpolated: ");
    scanf("%f",&x0);
    getchar();
    int choice;
    printf("Enter your choice of method :\n1.Lagrange\n2.Netwons Forward Difference\n3.Newton's backward difference\n");
    choice = getchar();
    switch(choice){
    	case '1': lagrange(x,y,n,x0); break;
    	case '2': forward_diff(x,y,n,x0); break;
    	case '3': backward_diff(x,y,n,x0); break;
    }
    
    return 0;
}

void lagrange(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0)
{
    int i,j;
    float l, sum = 0;
    
    for(i=0;i<n;i++)
    {
        l = 1;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                l *= (x0 - x[j])/(x[i] - x[j]);
            }
        }
        sum += l*y[i];
    }
    
    printf("The value of the function at x = %f is %f\n",x0,sum);
}

void forward_diff(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0)
{
    int i,j;
    float fd[MAX_SIZE][MAX_SIZE], h, p, sum = 0;
    
    // calculate forward difference table
    for(i=0;i<n;i++)
    {
        fd[i][0] = y[i];
    }
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            fd[i][j] = fd[i+1][j-1] - fd[i][j-1];
        }
    }
    
    // calculate h and p
    h = x[1] - x[0];
    p = (x0 - x[0])/h;
    
    // calculate the value of the function at x0 using the forward difference table
    sum = y[0];
    for(i=1;i<n;i++)
    {
        sum += (p/factorial(i))*fd[0][i];
        p *= (p-i);
    }
    
    printf("The value of the function at x = %f is %f\n",x0,sum);
}

void backward_diff(float x[MAX_SIZE], float y[MAX_SIZE], int n, float x0)
{
    int i,j;
    float bd[MAX_SIZE][MAX_SIZE], h, p, sum = 0;
    
    // calculate backward difference table
    for(i=0;i<n;i++)
    {
        bd[i][0] = y[i];
    }
    for(j=1;j<n;j++)
    {
        for(i=n-1;i>=j;i--)
        {
            bd[i][j] = bd[i][j-1] - bd[i-1][j-1];
        }
    }
    
    // calculate h and p
    h = x[1] - x[0];
    p = (x0 - x[n-1])/h;
    
    // calculate the value of the function at x0 using the backward difference table
    sum = y[n-1];
    for(i=1;i<n;i++)
    {
        sum += (p/factorial(i))*bd[n-1][i];
        p *= (p+i);
    }
    
    printf("The value of the function at x = %f is %f\n",x0,sum);
}

// function to calculate factorial
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}


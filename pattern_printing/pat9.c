#include <stdio.h>

int main()
{
//  int n=4;
    int n;
    scanf("%d",&n);
    int a=n, b=n;
    for (int i=0;i<n;i++){
        for (int j=0;j<2*n+1;j++){
            if (j==a || j==b)
                printf("+");
            else
                printf(" ");
        }
        a-=1;
        b+=1;
        printf("\n");
    }
    a++;
    b--;
    a++;
    b--;
    for (int i=1;i<n;i++){
        for (int j=0;j<2*n+1;j++){
            if (j==a || j==b)
                printf("+");
            else
                printf(" ");
        }
        a+=1;
        b-=1;
        printf("\n");
    }
    return 0;
}

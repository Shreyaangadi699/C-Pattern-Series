//program to print
/*6666
  5555
  4444
  3333
/*

#include <stdio.h>

int main()
{
    int i,j,n,r;

    r=6;
    printf("Enter a number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",r);
        }
        r--;
        printf("\n");

    }
    return 0;


}

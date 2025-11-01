//program to print
/*1
  23
  456
  78910
*/


#include <stdio.h>
int main()
{
  int i,j,n,r;
  printf("Enter a number of rows : ");
  scanf("%d",&n);
  
  r=1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j<=i)
      {
        printf("%d",r);
        r++;
      }
    }
    printf("\n");
  }
  return 0;
}

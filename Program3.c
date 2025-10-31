//program to print
/*333
  313
  323
  333
*/

#include <stdio.h>
int main()
{
 int i,j,n,r;
 printf("Enter a number of rows : ");
 scanf("%d",&n);
 r=3;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-1;j++)
 {
  if(i==2&&j==2)
  {
	 printf("1");
  }
   else if(i==3&&j==2)
  {
	 printf("2");
  }
  else
   {
   printf("%d",r);
   }
}
  
  printf("\n");
 }
  return 0;
}

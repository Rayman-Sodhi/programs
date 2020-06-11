#include<stdio.h>
int main()
{
int a[2][3]={{3,-2,5},
            {3,0,4}};
int b[3][2]={{2,3,},
             {-9,0,},
             {0,4}};
 int c[2][2];
 int i,j,k;
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 c[i][j]=0;
 }
 }
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 for(k = 0; k < 3; ++k)
                {
c[i][j] += a[i][k] * b[k][j];

 }
 }
 }
 for(i=0;i<2;i++)
 {for(j=0;j<2;j++)
 {printf("%d",c[i][j]);
 printf(" ");
 printf("\t");
 }
 printf("\n");
 }
 return 0;
}

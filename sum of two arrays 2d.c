#include<stdio.h>
int main()
{
int a[2][3]={{3,2,5},
            {3,3,4}};
int b[2][3]={{2,3,5},
             {9,1,4},
             };
 int c[2][3];
 int i,j;
 for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)
 {
c[i][j] = a[i][j] + b[i][j];

 }
 }

 for(i=0;i<2;i++)
 {for(j=0;j<3;j++)
 {printf("%d",c[i][j]);
 printf(" ");
 printf("\t");
 }
 printf("\n");
 }
 return 0;
}

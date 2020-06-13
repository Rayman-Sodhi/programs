#include<stdio.h>
#define m 5
#define n 4
int main()
{ int k,i,j;
int a[m][n]={{1, 2, 3, 4},
             {5, 6, 7 ,8},
             {9, 10, 11, 12},
            {13, 14, 15, 16},
            {17, 18, 19, 20}};
            for(i=0;i<m;i++)
            {
            for(j=0;j<n;j++)
            {printf("%d",a[i][j]);
            printf("\t");
            }
            printf("\n");
            }
             printf("\nthe diagonal is represented as\n");
            for(k=0;k<=m-1;k++)
            {
            i=k;
            j=0;
            while(i>=0)
            {
            printf("%d",a[i][j]);
            i=i-1;
            j=j+1;
            }
            printf("\n");
            }
            for(k=1;k<=n-1;k++)
            {
            i=m-1;
            j=k;
            while(j<=n-1)
            {
            printf("%d",a[i][j]);
            i=i-1;
            j=j+1;
            }
            printf("\n");
            }
            return 0;


            }

#include<stdio.h>
int main()
{
int m,n,i,j;
int row[m];
int col[n];
printf("enter size of matrix");
scanf("%d","%d",&m,&n);
int a[m][n];
printf("enter values in the given matrix is");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the given matrix is");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
printf("\t");
}
printf("\n");
}

for(i=0;i<m;i++)
{
row[i]=0;
}
for(i=0;i<n;i++)
{
col[i]=0;
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
if(a[i][j]==1);
{
row[i]=1;
col[j]=1;}
}
}

for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
if(row[i]==1 || col[j]==1)
{ a[i][j=1];
}
}
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
printf("\t");}
printf("\n");
}
return 0;
}




#include<stdio.h>
void fill(int m,int n)
{
int i,j;

int l=0,t=0;
int r=m;
int c=n;
char a[m][n];
char x='X';
while(l<n && t<m)
{
for(i=l;i<n;++i)
a[t][i]=x;
t++;
for(i=t;i<m;++i)
a[i][n-1]=x;
n--;
if(t<m)
{
for(i=n-1;i>=l;--i)
a[m-1][i]=x;
m--;
}
if(l<n)
{
for(i=m-1;i>=t;--i)
a[i][l]=x;
l++;
}

x=(x=='0')?'X':'0';
}
//int k;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%c",a[i][j]);
}
printf("\n");

}
}
int main ()
{
    printf("%\nvalues for m=6 and n=7 are\n ");
    fill(6,7);
    return 0;
}

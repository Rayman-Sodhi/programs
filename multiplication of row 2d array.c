#include<stdio.h>

void mul(int a[4][6]);
int main()

{

int a[4][6],i,j;
printf("enter elements in array");
for(i=0;i<4;i++)
{
for(j=0;j<6;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("\nelements of array are:\n");
for(i=0;i<4;i++)
{
for(j=0;j<6;j++)
{
    printf("%d",a[i][j]);
printf("\t");
}
printf("\n");
}
mul (a);
return 0;
}
void mul(int a[4][6])
{


int mult,i,j;
for(i=0;i<4;i++)
{mult=1;
for(j=0;j<6;j++)
{
mult=mult*a[i][j];
}
printf(" ");
printf("the multiplication of row elements %d is given as %d",i+1,mult);
printf("\n");
mult=1;
}
}




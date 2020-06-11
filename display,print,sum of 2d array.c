#include<stdio.h>
int main()
{int a[3][2],i,j,sum=0;
printf("enter elements in array");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("elements in array are");
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d",a[i][j]);
printf("\t");
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
sum=sum+a[i][j];
}
printf(" ");
printf("sum of elements in row  is %d",sum);
printf("\n");
sum=0;
}
return 0;
}

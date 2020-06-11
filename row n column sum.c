#include<stdio.h>
int main()
{
int a[3][2],i,j,sumr,sumc;
printf("enter elements in array");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{scanf("%d",&a[i][j]);}
}
printf("elements in array are\n");
for(i=0;i<3;i++)
{for(j=0;j<2;j++)
{printf("%d",a[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
{for(j=0;j<2;j++)
{sumr=sumr+a[i][j];
}
printf(" ");
printf("the sum of row is %d",sumr);
printf("\n");
sumr=0;
}
printf("\n");

for(i=0;i<2;i++)
{
    sumc=0;
    for(j=0;j<3;j++)
{sumc=sumc+a[j][i];
}
printf(" ");
printf("the sum of column is %d",sumc);
printf("\n");

}
printf("\n");




return 0;
}

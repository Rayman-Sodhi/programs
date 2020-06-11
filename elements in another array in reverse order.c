#include<stdio.h>
int main()
{int i;
int a[10],b[10];
printf("enter elements in array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}int j=0;
for(i=9;i>=0;i--)
{
    b[i]=a[j];
    j++;
}
printf("elemts in array are");
{
    for(i=1;i<10;i++)
printf("\n");
    printf("%d",b[i],"\n");
}
return 0;
}

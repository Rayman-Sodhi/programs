#include<stdio.h>
int main()
{
    int i, n=0; //initialized n for removing the garbage value
    printf("enter a number : ");
    scanf("%d",&n);
    i=n;             // changes: i=n, i>=1, i--
    while (i>=1)
    {
        printf("%d",i);
        i--;
    }
    return 0;
}

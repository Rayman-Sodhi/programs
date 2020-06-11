#include <stdio.h>
#include<math.h>
int main()
{
  long long int num=0, ld, product;
    printf("enter a number :%d ", num,"endl");
    scanf("%d",&num);
    product=num%10;
    while (num>10)
    {
        num=num/10;
        ld=num%10;
        product=product*ld;
    }
    printf("product of digits : %d",product,"endl");
    return 0;
}

#include<stdio.h>
int main()
{
int a[4][4]= {{2,4,6,8 } ,
             {5,9,12,16} ,
             {2,11,5,9 } ,
           {3,2,1,8 }} ;

int i,j,l=0,t=0,b=3,r=3,dir=0;
while(l<=r &&t<=b)
{
    if(dir==0)
    {
        for(i=l;i<=r;i++)
            printf("%d\n",a[t][i]);
            t++;
    }
    else if (dir==1)
    {
        for(i=t;i<=b;i++)
            printf("%d\n",a[i][r]);
        r--;

    }
    else if (dir==2)
    {
        for(i=r;i>=l;i--)
            printf("%d\n",a[b][i]);
        b--;
    }
    else if (dir==3)
    {
        for(i=b;i>=t;i--)
            printf("%d\n",a[i][l]);
        l++;
    }
dir=(dir+1)%4;
}


return 0;
}

#include<stdio.h>
int main()
{int m=6,n=7;
//int a[4][4]= {{2,4,6,8 } ,
  //           {5,9,12,16} ,
    //         {2,11,5,9 } ,
      //       {3,2,1,8 }} ;
      if (m>1 && m<=1000 && n>1 && n<=1000)
      {int a[m][n];
int i,l=0,t=0,b=3,r=3,dir=0;
while(l<=r &&t<=b)
{
    if(dir==0)
    {
        for(i=l;i<=r;i++)
            printf("%d", 'X');
            t++;
    }
    else if (dir==1)
    {
        for(i=t;i<=b;i++)
            printf("%d",'X');
        r--;

    }
    else if (dir==2)
    {
        for(i=r;i>=l;i--)
            printf("%d",'X');
        b--;
    }
    else if (dir==3)
    {
        for(i=b;i>=t;i--)
            printf("%d",'X');
        l++;
    }
dir=(dir+1)%4;
}
      }
      int k;
      int j;
      for(k=0;k<m;k++)
      {
          for(j=0;j<n;j++)
          {
              printf("%d",a[k][j]);
              printf("\t");
          }
          printf("\n");
      }
return 0;
}

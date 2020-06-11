#include <stdio.h>
#define M 3
int main()
{   int A[M][M] = { {3, 5, 4},
                    {7, 6, 9},
                    {2, 1, 8}};
    midrowcol(A);
return 0;
}
void midrowcol(int A[M][M])
{
    int i,j;
    printf(" matrix is \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {printf("%d ", A[i][j]);
        printf("\t");
        }
        printf("\n");
    }
printf("middle row");
     for (i = 0; i<M; i++)
    {
        for (j = 0; j <M; j++)
        {if((i<M-1) && (i>M-3))
        {
        printf("%d",A[i][j]);
        printf("\t");
        }
        else
        {printf("\t");}
        }
        printf("\n");
    }
printf("middle column\n");
 for (i = 0; i<M; i++)
    {
        for (j = 0; j <M; j++)
        {if((j<M-1) && (j>M-3))
        {
        printf("%d",A[i][j]);
        printf("\t");
        }
        else
        {printf("\t");}
        }
        printf("\n");
    }

}

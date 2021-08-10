#include <stdio.h>
int v[10][10];
int Mat(int r, intc, int p[r][c])
{
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    return 0;
}
int mulMat(int r, intc, intR, intC, int a[r][c], int b[R][C])
{
    int h = 0, m = 0, n = 0, t = 0, k = 0;
    for(int i = 0; i <= R; i++)
    {
        if (i == R)
        {
            m += 1;
            i = -1;
            n = 0;
            if (m == r)
            {
                break;
            }
        }
        else
        {
            for (int j = 0; j < C; j++)
            {
                int s = a[m][n] * b[i][j];
                v[m][j] += s;
            }
            n += 1;
        }
    }
}
int prtMat(int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d", v[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int r, c, R, C;
    printf("Enter the Row & Column of first matrix:\n");
    scanf("%d%d", &r, &c);
    printf("Enter the Row & Column of second matrix:\n");
    scanf("%d%d", &R, &C);
    int a[r][c], b[R][C];
    printf("Enter the elements of first matrix:\n");
    Mat(r, c, a);
    printf("Enter the elements of Second matrix:\n");
    Mat(R, C, b);
    printf("Multiplication:\n");
    mulMat(r, c, R, C, a, b);
    prtMat(r, C);
    return 0;
}

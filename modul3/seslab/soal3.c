#include <stdio.h>
int max(int X, int Y)
{
    int hasil1;
    if (X > Y)
    {
        hasil1 = X;
    }
    else
    {
        hasil1 = Y;
    }
    return hasil1;
}
int min(int M, int N)
{
    int hasil2;
    if (M < N)
    {
        hasil2 = M;
    }
    else
    {
        hasil2 = N;
    }
    return hasil2;
}
int main()
{
    int N, kecil = 100001, besar = -100001;
    scanf("%d", &N);
    int a[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }
    if (N == 1)
    {
        besar = a[1];
        kecil = a[1];
    }
    else
    {
        for (int i = 1; i <= N - 1; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                int total1;
                total1 = max(a[i], a[j]);
                if (total1 > besar)
                {
                    besar = total1;
                }
            }
            for (int j = i + 1; j <= N; j++)
            {
                int total2;
                total2 = min(a[i], a[j]);
                if (total2 < kecil)
                {
                    kecil = total2;
                }
            }
        }
    }
    printf("max: %d\n", besar);
    printf("min: %d", kecil);
}
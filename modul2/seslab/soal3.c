#include <stdio.h>
#include <math.h>
int main()
{
    int N, K;
    scanf("%d", &N);
    if (N > 1)
    {
        printf("* ");
        for (int i = 3; i <= N; i++)
        {
            for (int j = 2; j < sqrt(i) + 1; j++)
            {
                K = i % j; //pengecek prima
                if (K == 0)
                {
                    printf("%d ", i); //print non prima
                    break;
                }
            }
            if (K != 0) //penanda prima
            {
                printf("* ");
            }
        }
    }
    else
    {
        printf("input harus dimulai dari 2");
    }
}
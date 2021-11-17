#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) //penanda habis dibagi 2
        {
            printf("* ");
        }
        else
        {
            printf("%d ", i);
        }
    }
}
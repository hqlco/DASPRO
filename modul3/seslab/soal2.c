#include <stdio.h>
int pola(int X)
{
    if (X == 0)
    {
        return 0;
    }
    return X * X + pola(X - 1);
}
int main()
{
    int M;
    scanf("%d", &M);
    printf("%d", pola(M));
}
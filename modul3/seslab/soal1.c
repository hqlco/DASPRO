#include <stdio.h>
int faktorial(int A)
{
    if (A == 1)
    {
        return 1;
    }
    return A * faktorial(A - 1);
}
int main()
{
    int X;
    scanf("%d", &X);
    if (X == 0)
    {
        printf("%d", 1);
    }
    else if (X >= 0)
    {
        printf("%d", faktorial(X));
    }
    else
    {
        printf("tidak terdefinisi");
    }
}
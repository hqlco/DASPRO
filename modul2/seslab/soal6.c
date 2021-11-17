#include <stdio.h>
int panjang(char X[100])
{
    char *ch = X;
    int Y = 0;
    while (*ch != '\0')
    {
        Y++;
        ch++;
    }
    return Y;
}
int main()
{
    int ASCII, P, N = 0;
    char kata[100];
    scanf("%s", kata);
    P = panjang(kata);
    for (int i = 0; i < P; i++)
    {
        if (N == 0)
        {
            ASCII = kata[i];
            if (65 <= ASCII && ASCII <= 90)
            {
                kata[i] = kata[i] + 32;
                printf("%c", kata[i]);
            }
            else if (97 <= ASCII && ASCII <= 122)
            {
                printf("%c", kata[i]);
            }
            else if (ASCII == 95)
            {
                ASCII = kata[i + 1];
                if (97 <= ASCII && ASCII <= 122)
                {
                    kata[i + 1] = kata[i + 1] - 32;
                    printf("%c", kata[i + 1]);
                    N = N + 1;
                }
                else if (65 <= ASCII && ASCII <= 90)
                {
                    printf("%c", kata[i + 1]);
                    N = N + 1;
                }
            }
        }
        else if (N == 1)
        {
            if (i + 1 < P)
            {
                ASCII = kata[i + 1];
                if (65 <= ASCII && ASCII <= 90)
                {
                    kata[i + 1] = kata[i + 1] + 32;
                    printf("%c", kata[i + 1]);
                }
                else if (97 <= ASCII && ASCII <= 122)
                {
                    printf("%c", kata[i + 1]);
                }
            }
        }
    }
}
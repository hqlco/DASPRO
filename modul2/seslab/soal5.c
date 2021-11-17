#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0, e = 0, i = 0, u = 0, o = 0, P;
    char kalimat[100];
    fgets(kalimat, 100, stdin);
    P = strlen(kalimat); //panjang array
    for (int j = 0; j < P; j++)
    {
        if (kalimat[j] == 'A' || kalimat[j] == 'a')
        {
            a++;
        }
        else if (kalimat[j] == 'e' || kalimat[j] == 'E')
        {
            e++;
        }
        else if (kalimat[j] == 'i' || kalimat[j] == 'I')
        {
            i++;
        }
        else if (kalimat[j] == 'u' || kalimat[j] == 'U')
        {
            u++;
        }
        else if (kalimat[j] == 'o' || kalimat[j] == 'O')
        {
            o++;
        }
    }
    printf("A/a : %d\n", a);
    printf("I/i : %d\n", i);
    printf("U/u : %d\n", u);
    printf("E/e : %d\n", e);
    printf("O/o : %d\n", o);
}
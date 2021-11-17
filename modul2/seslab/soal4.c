#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]); //isian variabel di array
    }
    for (int i = N; i >= 1; i--)
    {
        printf("%d\n", a[i]); //di print menggunakan endline dan secara terbalik
    }
}
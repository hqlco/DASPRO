#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0) //cek 0
    {
        printf("netral");
    }
    else if (a % 2 == 0) //cek habis di bagi 2
    {
        printf("Genap");
    }
    else // kasus selain diatas
    {
        printf("Ganjil");
    }
    return 0;
}
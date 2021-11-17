#include <stdio.h>
int main()
{
    int l1, l2, l3, l4, hasil_nyata;             //variabel variabel
    scanf("%d %d %d %d", &l1, &l2, &l3, &l4);    // input variabel
    hasil_nyata = 8 * l1 + 4 * l2 + 2 * l3 + l4; //konversi biner ke bilangan basis 10
    if ((l1 == 0 || l1 == 1) && (l2 == 0 || l2 == 1) && (l3 == 0 || l3 == 1) && (l4 == 0 || l4 == 1))
    //kasus biner ditulis semestinya 0 dan 1
    {
        if (hasil_nyata == 0)
        {
            printf("1 1 1 1 1 1 0");
        }
        else if (hasil_nyata == 1)
        {
            printf("0 1 1 0 0 0 0");
        }
        else if (hasil_nyata == 2)
        {
            printf("1 1 0 1 1 0 1");
        }
        else if (hasil_nyata == 3)
        {
            printf("1 1 1 1 0 0 1");
        }
        else if (hasil_nyata == 4)
        {
            printf("0 1 1 0 0 1 1");
        }
        else if (hasil_nyata == 5)
        {
            printf("1 0 1 1 0 1 1");
        }
        else if (hasil_nyata == 6)
        {
            printf("1 0 1 1 1 1 1");
        }
        else if (hasil_nyata == 7)
        {
            printf("1 1 1 0 0 0 0");
        }
        else if (hasil_nyata == 8)
        {
            printf("1 1 1 1 1 1 1");
        }
        else if (hasil_nyata == 9)
        {
            printf("1 1 1 1 0 1 1");
        }
        else //kasus selain 0-9
        {
            printf("0 0 0 0 0 0 0");
        }
    }
    else //kasus biner tidak ditulis semestinya
    {
        printf("0 0 0 0 0 0 0");
    }
    return 0;
}
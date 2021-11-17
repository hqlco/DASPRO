#include <stdio.h>
int main()
{
    int bil, A, B, C;           // variabel variabel
    scanf("%d", &bil);          //input bilangan
    A = bil / 100;              // A=digit ratusan
    if (0 <= bil && bil <= 999) // kasus input 0-999
    {
        if (0 <= bil && bil <= 9) //kasus input 0-9
        {
            printf("Merupakan Bilangan Armstrong"); //output
        }
        else //kasus selain 0-9
        {
            if (A == 0) //kasus angka 2 digit
            {
                B = bil / 10;                 //B =angka puluhan
                C = bil - B * 10;             //C =angka satuan
                if ((B * B) + (C * C) == bil) //fungsi amstrong
                {
                    printf("Merupakan Bilangan Armstrong"); //output
                }
                else // selain fungsi amstrong
                {
                    printf("Bukan Merupakan Bilangan Armstrong"); //output
                }
            }
            else //kasus angka 3 digit
            {
                B = (bil - A * 100) / 10;                           //B =angka puluhan
                C = bil - A * 100 - B * 10;                         //C =angka satuan
                if ((A * A * A) + (B * B * B) + (C * C * C) == bil) //fungsi amstrong
                {
                    printf("Merupakan Bilangan Armstrong"); //output
                }
                else // selain fungsi amstrong
                {
                    printf("Bukan Merupakan Bilangan Armstrong"); //output
                }
            }
        }
    }
    else // kasus selain input 0-999
    {
        printf("bilangan harus dalam rentan 0 sampai 999"); //output
    }
    return 0;
}
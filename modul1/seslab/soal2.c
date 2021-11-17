#include <stdio.h>
int scanAngka(int bil) //case angka satuan atau puluhan antara 0-9
{
    switch (bil)
    {
    case 1:
        printf("%s", "satu");
        break;
    case 2:
        printf("%s", "dua");
        break;
    case 3:
        printf("%s", "tiga");
        break;
    case 4:
        printf("%s", "empat");
        break;
    case 5:
        printf("%s", "lima");
        break;
    case 6:
        printf("%s", "enam");
        break;
    case 7:
        printf("%s", "tujuh");
        break;
    case 8:
        printf("%s", "delapan");
        break;
    case 9:
        printf("%s", "sembilan");
        break;
    case 0:
        printf("%s", " ");
        break;
        return 0;
    }
}
int scanAngkaKapital(int bil) //case angka satuan atau puluhan diawal input antara 0-9
{
    switch (bil)
    {
    case 1:
        printf("%s", "Satu");
        break;
    case 2:
        printf("%s", "Dua");
        break;
    case 3:
        printf("%s", "Tiga");
        break;
    case 4:
        printf("%s", "Empat");
        break;
    case 5:
        printf("%s", "Lima");
        break;
    case 6:
        printf("%s", "Enam");
        break;
    case 7:
        printf("%s", "Tujuh");
        break;
    case 8:
        printf("%s", "Delapan");
        break;
    case 9:
        printf("%s", "Sembilan");
        break;
    case 0:
        printf("%s", " ");
        break;
        return 0;
    }
}
int main()
{
    int bil, a, b, c;           //variabel- variabel
    scanf("%d", &bil);          // input bilangan
    a = bil / 100;              //a=digit ratusan
    b = (bil - a * 100) / 10;   //b=digit puluhan
    c = bil - a * 100 - b * 10; //c=digit satuan
    if (0 <= bil && bil <= 100) //kasus untuk input 0-100
    {
        if (bil == 0) //kasus untuk input 0
        {
            printf("Nol"); //output
        }
        else //kasus selain input 0
        {
            if (a == 1) //kasus digit ratusan =satu
            {
                printf("Seratus "); //output
            }
            else //kasus selain input digit ratusan= satu
            {
                printf(""); //output kosong
            }
            if (b == 1) //kasus digit puluhan =satu
            {
                if (c == 1) //kasus satuan= satu
                {
                    printf("Sebelas"); //output
                }
                else if (c == 0)
                {
                    printf("Sepuluh"); //output
                }
                else
                {
                    scanAngkaKapital(c); //output
                    printf("belas");     //output
                }
            }
            else if (b == 0) // kasus hanya angka satuan saja
            {
                scanAngkaKapital(c); //output
            }
            else //selain semua kasus diatas
            {
                scanAngkaKapital(b); //output
                printf(" puluh ");   //output
                scanAngka(c);        //output
            }
        }
    }
    else // selain kasus input 0-100
    {
        printf("input  harus diantara 0-100"); //output
    }
    return 0;
}
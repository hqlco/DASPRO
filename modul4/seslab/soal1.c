#include <stdio.h>
void tambah(int a, int b, int *p)
{
    *p = a + b;
}
int main()
{
    int a = 1;
    int b = 2;
    int c;
    tambah(a, b, &c);
    printf("%d", c);
}
// ? DENGAN INPUT
/*
void tambah(int a, int b, int *p)
{
    p = a + b;
}
int main()
{
    int a ,b,c;
    scanf("%d %d",&a,&b);
    tambah(a, b, &c);
    printf("%d", c);
}
*/
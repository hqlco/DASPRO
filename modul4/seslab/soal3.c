#include <stdio.h>
void tukar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int array[], int array_size)
{
    int *alamat1 = array, *alamat2 = array + array_size - 1;
    while (alamat1 < alamat2)
    {
        tukar(alamat1, alamat2);
        alamat1++;
        alamat2--;
    }
}
void print(int array[], int array_size)
{
    int *length = array + array_size, *position = array;
    for (position = array; position < length; position++)
    {
        printf("%d ", *position);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    reverse(array, n);
    print(array, n);
    return 0;
}

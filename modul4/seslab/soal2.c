#include <stdio.h>
#include <string.h>
struct Mahasiswa
{
    char nama[100];
    int MTK;
    int IPA;
    int BINDO;
    int BIG;
};
int main(void)
{
    int N;
    scanf("%d", &N);
    struct Mahasiswa mhs[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", mhs[i].nama);
        scanf("%d", &mhs[i].MTK);
        scanf("%d", &mhs[i].IPA);
        scanf("%d", &mhs[i].BINDO);
        scanf("%d", &mhs[i].BIG);
    }
    int M;
    scanf("%d", &M);
    char kata[100];
    for (int j = 0; j < M; j++)
    {
        scanf("%s", kata);
        int x = 0;
        for (int i = 0; i < N; i++)
        {
            if (strcmp(kata, mhs[i].nama) == 0)
            {
                x++;
                printf("Nilai %s\n", mhs[i].nama);
                printf("Matematika : %d\n", mhs[i].MTK);
                printf("IPA : %d\n", mhs[i].IPA);
                printf("Bahasa Indonesia : %d\n", mhs[i].BINDO);
                printf("Bahasa Inggris : %d\n", mhs[i].BIG);
            }
            else if (x == 0 && i == N - 1)
            {
                printf("Nilai %s tidak ditemukan\n", kata);
            }
        }
    }
}
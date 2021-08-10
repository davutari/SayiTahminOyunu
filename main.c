#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{

    int hak = -1, oyuncuSkor = 0, oturumSkor = 0, bilgisayarSkor = 0;
    int rasgeleSayi, oyuncuTahmini;
    char oyunCikis;

    do
    {
        srand(time(NULL));
        rasgeleSayi = rand() % 999 + 100;
        printf("Rasgele Sayi: %d\n", rasgeleSayi);
        printf("Oyuncu Hakki:");
        scanf("%d", &hak);
        oturumSkor = 0;
        do
        {
            printf("\n3 Basamakli bir sayi Gir:");
            scanf("%d", &oyuncuTahmini);
            if (oyuncuTahmini >= 1000 || oyuncuTahmini < 100)
            {
                printf("\nLutfen 3 Basamakli bir sayi Gir:");
            }
            else
            {
                if (oyuncuTahmini == rasgeleSayi)
                {
                    printf("\nTebrikler!! Dogru Tahmin Ettiniz: %d", rasgeleSayi);
                    oyuncuSkor++;
                    oturumSkor++;
                    hak--;
                    break;
                }
                else
                {
                    printf("\nUzgunum!!! Yanlis Tahmin Ettiniz: %d", oyuncuTahmini);
                    hak--;
                }
            }

        } while (hak > 0);
        if (oturumSkor == 0)
        {
            printf("T�m Haklariniz bitti, Dogru Sayi: %d", rasgeleSayi);
            bilgisayarSkor++;
        }
        printf("Oyuncu Skor=%d, Bilgisayar Skor=%d", oyuncuSkor, bilgisayarSkor);
        printf("\n Oyuna devam etmek icin E/e girin: ");
        do
        {
            scanf("%c", &oyunCikis);
        } while (oyunCikis == '\n');
    } while (oyunCikis == 'E' || oyunCikis == 'e');

    return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//  Mochamad Farchan Ardiatama
//  Dinus University
int main()
{
    int batas;
    srand(time(NULL));
    int nyawa = 5;
    int selisih;
    ulang:
    printf("Masukan bilangan antara (10 - 100) : ");scanf("%d",&batas);
    if(batas > 100 || batas < 10){
        system("cls");
        printf("\nSilahkan masukan batas 0 - 100\n\n");
        goto ulang;
    }else{
        printf("Silahkan tebak nilai antara 0 sampai %d !!\n",batas);
        int cheat = rand() % batas;
        printf("Cheat -> ini adalah angka yang ditebak : %d\n",cheat);
        printf("Nyawa anda : %d\n",nyawa);
        int tebak;
        while(nyawa != 0){
            printf("\nMasukan tebakan anda : ");scanf("%d",&tebak);
                if(tebak > cheat){
                    nyawa--;
                    selisih = tebak - cheat;
                    if(selisih < 2){
                        printf("Ayo sedikit lagi tebakanmu tepat.\n");
                        printf("Tebakan anda salah, nyawa : %d\n",nyawa);
                    }else{
                        printf("Tebakan anda terlalu besar.\n");
                        printf("Tebakan anda salah, nyawa : %d\n",nyawa);
                    }
                }else if(tebak < cheat){
                    nyawa--;
                    selisih = cheat - tebak;
                    if(selisih < 2){
                        printf("Ayo sedikit lagi tebakanmu tepat.\n");
                        printf("Tebakan anda salah, nyawa : %d\n",nyawa);

                    }else{
                        printf("Tebakan anda terlalu kecil.\n");
                        printf("Tebakan anda salah, nyawa : %d\n",nyawa);
                    }
                }else if(tebak == cheat){
                    printf("\nSelamat tebakan anda benar !!!\n");
                    return 0;
                }
        }
        if(nyawa == 0){
            printf("\nGame Over !!!\n");
        }
    }

    return 0;
}

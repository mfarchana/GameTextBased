#include <stdio.h>
#include <stdlib.h>

//  Mochamad Farchan Ardiatama
//  Dinus University

typedef struct{
    char nama[15];
    int stat;
}inventory;

inventory item[];

int main()
{
    char a = 'y';
    int i=0;
    int j=0;
    int terlemah = 0;
    int terhebat = 0;
    while(a == 'y'){
        printf("\n|| ============================ ||\n");
        fflush(stdin);
        printf("Input nama item - [%d] : ",i+1);    gets(item[i].nama);
        printf("Input Stat - [%d] : ",i+1);         scanf("%d",&item[i].stat);

        printf("Item anda : %s\n",item[i].nama);
        printf("Stat %s : %d\n",item[i].nama,item[i].stat);

        for(j=0;j<=i;j++){
            if(item[j].stat > item[terhebat].stat){
                terhebat = j;
            }

            if(item[j].stat < item[terlemah].stat){
                terlemah = j;
            }
        }

        if(i == 0){
            printf("Item sebelumnya : Nothing\n");
            printf("Item terlemah : %s\n",item[0].nama);
            printf("Item terhebat : %s\n",item[0].nama);
        }else{
            printf("Item sebelumnya : %s\n",item[i-1].nama);
            printf("Item terlemah : %s\n",item[terlemah].nama);
            printf("Item terhebat : %s\n",item[terhebat].nama);
        }
        i++;
        fflush(stdin);
        printf("Mau input lagi ? (y/n) ");scanf(" %c",&a);
    }
    return 0;
}

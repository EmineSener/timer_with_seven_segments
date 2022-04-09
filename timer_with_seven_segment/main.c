#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
 void ust_taban(int dizi[]){
   for(int i=0;i<=3;i++){ //Dizi elemanlarý arasýnda gezinmek
        if(dizi[i]==4)    //4 un ust tabaný yok
          printf("        ");  // 4 adet bosluk karakteri
        else if(dizi[i]==1)   //1 de ayný
            printf("        ");
        else
           printf(" ****** ");   // 4 ve 1 haricindekiler ust taban alir

         printf("       ");  //dizinin diger elemanýna gecmeden once bosluk
    }
     }   //Birinci satýrým bitti imlec alt satýra

void ust_yan(int dizi[]){
  for(int i=1;i<5;i++){
     for(int j=0;j<=3;j++){
        if(dizi[j]==1||dizi[j]==2||dizi[j]==3||dizi[j]==7)
            printf(" ");
        else
            printf("*");
        printf("      ");
        if(dizi[j]==5||dizi[j]==6)
            printf(" ");
        else
            printf("*");

        printf("       ");//elemanlar arasi bosluk 7 karakter
     }
     printf("\n");
  }
}
void orta_taban(int dizi[]){
   for(int i=0;i<=3;i++){ //Dizi elemanlarý arasýnda gezinmek
        if(dizi[i]==0||dizi[i]==1||dizi[i]==7)    //4 un ust tabaný yok
          printf("        ");  // 4 adet bosluk karakteri

        else
           printf(" ****** ");   // 4 ve 1 haricindekiler ust taban alir

         printf("       ");  //dizinin diger elemanýna gecmeden once bosluk
    }
     }   //Birinci satýrým bitti imlec alt satýra

 void alt_yan(int dizi[]){
  for(int i=1;i<5;i++){
     for(int j=0;j<=3;j++){
        if(dizi[j]==1||dizi[j]==3||dizi[j]==4||dizi[j]==5||dizi[j]==7||dizi[j]==9)
            printf(" ");
        else
            printf("*");
        printf("      ");
        if(dizi[j]==2)
            printf(" ");
        else
            printf("*");

        printf("       ");//elemanlar arasi bosluk 7 karakter
     }
     printf("\n");

  } }
void alt_taban(int dizi[]){
   for(int i=0;i<=3;i++){ //Dizi elemanlarý arasýnda gezinmek
        if(dizi[i]==1||dizi[i]==4||dizi[i]==7)    //4 un ust tabaný yok
          printf("        ");  // 4 adet bosluk karakteri

        else
           printf(" ****** ");   // 4 ve 1 haricindekiler ust taban alir

         printf("       ");  //dizinin diger elemanýna gecmeden once bosluk
    }}
void yaz(int dizi[]){

                    ust_taban(dizi);
                                  printf("\n");
                   ust_yan(dizi);
                   printf("\n");
                    orta_taban(dizi);
                   printf("\n");
                    alt_yan(dizi);
                   printf("\n");
                    alt_taban(dizi);


}

int main()
{  int dizi[4];


   for(int i=5;i>=0;i--){
        for(int j=9;i>=0;i--){
            for(int k=5;k>=0;k--){
                for(int l=9;l>=0;l--){

                   dizi[0]=i;
                   dizi[1]=j;
                   dizi[2]=k;
                   dizi[3]=l;


      yaz(dizi);
    Sleep(1000);
    system("cls");



                }
            }

        }
}
 return 0;}



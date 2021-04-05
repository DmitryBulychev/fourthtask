#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main() {
   int mass[N][N];
   int y=1;
   srand(time(NULL));
   for (int i = 0; i < N; i++){
       for (int j = 0; j<N;j++){
           mass[i][j]= rand()%9;
       }
   }
   printf("Изначальный вид массива:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j<N;j++){
            printf("%d ",mass[i][j]);
        }
        printf("\n");
    }
    printf("Вывод массива по спирали:\n");
    for (int i = 0; i < N; i++){
       if(i%2==0){ for (int j = 0; j<N;j++){
            printf("%d ",mass[i][j]);
        }
        printf("\n");
       y++;}
       else{
           for (int j = 4; j>=0;j--){
               printf("%d ",mass[i][j]);
           }
           printf("\n");
       y++;}
    }
    return 0;
}

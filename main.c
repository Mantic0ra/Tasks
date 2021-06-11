#include "stdlib.h"
#include "stdio.h"
#include "time.h"

#define ROW_SIZE 3
#define COL_SIZE 3

int main()
{
    int mas[ROW_SIZE][COL_SIZE];
    int i, j;
    srand(time(NULL));
    int max, min;

    for(i = 0; i < ROW_SIZE; i++) {
        printf("[%d] ", i);
        for(j = 0; j < COL_SIZE; j++) {
            mas[i][j] = rand() % 100;
            printf("%d ", mas[i][j]);
        }
        printf("\n");
    }

    max = min = mas[0][0];

    for(i = 0; i < ROW_SIZE; i++) {
        for(j = 0; j < COL_SIZE; j++) {
           
           if(mas[i][j] > max) {
               max = mas[i][j];
           }

           if(mas[i][j] < min) {
               min = mas[i][j];
           }

        }
    }

    printf("max = %d \n" , max);
    printf("min = %d \n" , min);  

    return 0;
} 

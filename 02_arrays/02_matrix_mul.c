/*Multiply two matrices*/
#include <stdio.h>
#define N 3

int main(int argc, char const *argv[]){
    
    int mat1[N][N] = {{5, 6, 2}, {2, 3, 5}, {10, 4, 5}};
    int mat2[N][N] = {{4, 62, 3}, {4, 7, 1}, {1, 9, 0}};
    int mat3[N][N] = {};


    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < N; j++){
            for (size_t k = 0; k < N; k++)
                mat3[i][j] += (mat1[i][k] * mat2[k][j]);
        }

    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < N; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }
    
    return 0;
}


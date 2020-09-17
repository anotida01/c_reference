/*Multiply two 4096 by 4096 matrices*/
#include <stdio.h>
#include <stdlib.h>
#define N 4096

void generate_random_matrix(int mat[][N]);

// global vars so that not limited by stack space (67MB each)
int mat1[N][N] = {};
int mat2[N][N] = {};
int mat3[N][N] = {};

int main(int argc, char const *argv[]){
    

    generate_random_matrix(mat1);
    generate_random_matrix(mat2);

    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < N; j++){
            for (size_t k = 0; k < N; k++)
                mat3[i][j] += (mat1[i][k] * mat2[k][j]);
        }

    // for (size_t i = 0; i < N; i++){
    //     for (size_t j = 0; j < N; j++)
    //         printf("%d ", mat3[i][j]);
    //     printf("\n");
    // }
    
    return 0;
}


void generate_random_matrix(int mat[][N]){

    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < N; j++){
            mat[i][j] = (rand() % 10);
        }
    
}

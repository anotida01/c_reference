#include <stdio.h>
#define N 3

void print_array(int arr[][N], int n);

int main(int argc, char const *argv[]){

    int mat[N][N] = {{5, 6, 2}, {2, 3, 5}, {10, 4, 5}};

    print_array(mat, N);

    return 0;
}

// must specify the 2nd dimension and onwards.
void print_array(int arr[][N], int n){
    
    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++)
            printf("%i ", arr[i][j]);
        printf("\n");
    }

}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int** b = (int **) malloc(sizeof(int *) * 5); // b is a local pointer. It points to an array of pointers in the heap.
    int** d = b;

    b[0] = (int *) malloc (sizeof(int) * 2);
    b[1] = (int *) malloc (sizeof(int) * 2); // 2x2 array in the heap

    b[0][0] = 1; b[0][1] = 2;
    b[1][0] = 3; b[1][1] = 4;

    printf("%d ", (*( d + 0 ))[0] );
    printf("%d\n", *( d[0] + 1 ) );
    printf("%d ", **(d+1));
    printf("%d\n", *(*(d+1) + 1) );
    printf("%p\n%p", b, d);

    return 0;
}

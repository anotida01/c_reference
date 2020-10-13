
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int** b = (int **) malloc(sizeof(int *) * 2); // b is a local pointer. It points to an array of pointers in the heap.
    int** d = b; // d is also a double pointer. points to whatever b is pointing to.

    // 2 x 2 array in heap
    b[0] = (int *) malloc (sizeof(int) * 2); 
    b[1] = (int *) malloc (sizeof(int) * 2);

    b[0][0] = 1; b[0][1] = 2; // [1, 2]
    b[1][0] = 3; b[1][1] = 4; // [3, 4]

    // many ways to deference the values
    printf("%d ", (*( d + 0 ))[0] );
    printf("%d\n", *( d[0] + 1 ) );
    printf("%d ", **(d+1));
    printf("%d\n", *(*(d+1) + 1) );
    printf("%p\n%p", b, d);

    return 0;
}

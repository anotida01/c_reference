#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 128
#define NUM 50

typedef struct {
    char name[MAX_STR_LEN]; // 128 Bytes
    char address[MAX_STR_LEN]; // 128 Bytes
    int id_num; // 4 Bytes
} Employee;


int main(int argc, char const *argv[])
{
    
    Employee * pt = NULL;
    pt = (Employee *) malloc(sizeof(Employee) * NUM); // make NUM employees in the heap

    strcpy(pt[0].name, "Jacob James"); // using array notation
    strcpy(pt[0].address, "1 Downing Street");

    (*(pt)).id_num = 5641; // using pointer artihmitic notation

    printf("%s\n", pt[0].name);
    printf("%s\n", pt[0].address);
    printf("%d\n", pt[0].id_num);
    printf("Struct Uses: %d Bytes\n", sizeof(*(pt))); // Single Struct is 260 Bytes

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char * get_memory;

    while (1){

        get_memory = (char*) malloc(1048576 * 40); // get 40MiB of memory at a time

        if(get_memory == NULL){
            printf("We're all out of memory!!\n");
            return 1;
        }

        printf("We got the memory starting at: %p\n", get_memory);

    }

    return 0;
}

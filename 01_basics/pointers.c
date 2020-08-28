#include <stdio.h>

int main(int argc, char const *argv[]){

    int num, *pnum;
    num = 7;
    pnum = &num;

    printf("num is stored at %p, and pnum points to: %p\n", &num, pnum);
    printf("the value of num is: %d, and dereferencing *pnum results in: %d\n", num, *pnum);
    printf("pnum itself is a variable of type int* (int pointer), and is stored at:%p\n", &pnum);

    return 0;
}

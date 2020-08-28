#include <stdio.h>

int main(int argc, char const *argv[]){
    
    // bitwise shifting
    int a = 0b00001001;
    a = a << 1;

    int b = 0b10001111;

    // bitwise logical AND
    int c = a & b;

    // commma operator - x will be a+b after both a & b are incremented, the values of a and b remain untouched.
    int x = (a++, b++, a+b);
    
    // sizeof()
    unsigned int d = 5;
    printf("Size of unsinged int is: %d bytes", sizeof(d));

    return 0;

}

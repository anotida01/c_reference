#include <stdio.h>

int main(){

    // outputing tp stdout
    printf("Hello Stdout!\n");

    // control string general syntax: % [flags] [width] [.precision] [modifier] type

    
    // reading from stdin
    int hello;
    printf("Please input an integer: ");
    scanf("%d", &hello);

    /*
    general syntax for scanf control string: % [*] [width] [size_modifier] type
    width: number of character to be read. input is terminated on whitespace.
    size_modifier: h - short, l - long, L - long double etc.
    */

    // print the memory location of hello
    printf("The memory location of that var is: 0x%x\n", &hello);
    return 0;
}
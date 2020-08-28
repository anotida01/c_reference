#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_english(int);

int main() {

    int a, b;
    scanf("%d\n%d", &a, &b);

    for (size_t i = a; i <= b; i++){
        print_english(i);
        printf("\n");
    }
    
    return 0;
}

void print_english(int n){

    if (n < 10){
        if (n == 1) printf("one");
        else if (n == 2) printf("two");
        else if (n == 3) printf("three");
        else if (n == 4) printf("four");
        else if (n == 5) printf("five");
        else if (n == 6) printf("six");
        else if (n == 7) printf("seven");
        else if (n == 8) printf("eight");
        else if (n == 9) printf("nine");
    }
    else{
        if (n % 2 == 0)
            printf("even");
        else printf("odd");
    }
    
}

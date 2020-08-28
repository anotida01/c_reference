#include <stdio.h>

int mul(const int * , const int *);

int main(int argc, char const *argv[]){
	int a = 10, b = 7;

	int x = mul(&a, &b);

	printf("Result: %d\n", x);
		
	return 0;
}

int mul(const int* a, const int* b){
	return (*a * *b);
}

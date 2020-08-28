#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int grades[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int nums[5] = {5, 10, 15, 20, 25};

	printf("Address of grades is: %p\n", &grades);
	printf("Addr of 2nd grade is: %p\n", &grades[1]);
	printf("Size of a single int is: %dbytes\n", (int) sizeof(grades[0]));
	printf("Size of a the array is: %dbytes\n\n", (int) sizeof(grades));

	int *ptr, *ptr2, *ptr3;

	//following lines are equivalent
	ptr = grades; 
	ptr2 = &grades;
	ptr3 = &grades[0];

	printf("Value of ptr: %p\nValue of ptr2: %p\nValue of ptr3: %p\n\n", ptr, ptr2, ptr3);

	// pointers can be used to access array elements
	printf("The 2nd Element of grades[] is: %d\n", *(++ptr));

	//we can create an array of pointers
	int *p_array[2] = {grades, nums};
	int p_array_size = 2;

	for (int i = 0; i < p_array_size; i++){
		printf("%d ", *p_array[i]);
	}

	return 0;
}

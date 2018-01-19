#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr); // prototype

int fig07_16(void) {
	float array[SIZE];

	printf("The number of elements in the array is %u"
		"\nThe number of bytes returned by getSize is %u\n", sizeof(array), getSize(array));
}

size_t getSize(float *ptr) {
	return sizeof(ptr);
}
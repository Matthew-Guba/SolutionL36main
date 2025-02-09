#include <iostream>

int count_values_equal_N(int* array, int size, int n) {
	int counter = 0;

	for (int i = 0; i < size; i++) {
		if (abs(array[i]) == n) {
			counter++;
		}
	}

	return counter;
}
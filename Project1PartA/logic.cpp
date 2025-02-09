int count_nonzero_values(int* array, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			counter++;
		}
	}
	return counter;
}
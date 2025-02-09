int count_values_bigger_N(int* array, int size, int n) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > n) {
			counter++;
		}
	}
	return counter;
}
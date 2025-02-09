double find_avg(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum / size;
}

int count_values_smaller_avg(int* array, int size, double avg) {
	int counter = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] < avg) {
			counter++;
		}
	}
	return counter;
}
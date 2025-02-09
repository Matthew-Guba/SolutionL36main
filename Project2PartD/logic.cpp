bool are_values_positive(int* array, int size) {
	bool result = true;

	for (int i = 0; i < size; i++) {
		if (array[i] <= 0) {
			result = false;
			break;
		}
		
	}

	return result;
}

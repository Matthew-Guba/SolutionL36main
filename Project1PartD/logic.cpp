bool is_there_a_pair(int* array, int size) {
	bool result = false;

	for (int i = 0; i < size; i++) {

		for (int j = i+1; j < size; j++) {

			if (array[i] == array[j]) {
				result = true;
				break;
			}

		}
	}

	return result;
}

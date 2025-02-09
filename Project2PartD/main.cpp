#include <iostream>
#define SIZE 10
using namespace std;

bool are_values_positive(int* array, int size);

int main() {
	int array[SIZE] = { -1,2,3,4,9,5,6,7,8,9 };

	cout << (are_values_positive(array, SIZE) ? "Positive" : "One or more is negative or equals to 0");
}
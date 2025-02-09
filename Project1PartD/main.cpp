#include <iostream>
#define SIZE 10
using namespace std;

bool is_there_a_pair(int* array, int size);

int main() {
	int array[SIZE] = { 1,2,3,4,9,5,6,7,8,9 };

	cout << (is_there_a_pair(array, SIZE)? "There is a pair" : "There isn't a pair");
}
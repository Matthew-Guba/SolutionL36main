#include <iostream>
#define SIZE 10
using namespace std;

int count_nonzero_values(int* array, int size);

int main() {
	int array[SIZE] = { 1,2,3,4,5,6,0,7,0,10 };
	cout <<"There is(are) " << count_nonzero_values(array, SIZE) << " non-zero value(s)" << endl;
}
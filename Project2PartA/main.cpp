#include <iostream>
#define SIZE 10
using namespace std;

int count_negative_values(int* array, int size);

int main() {
	int array[SIZE] = { -1,2,3,4,5,-6,0,7,0,-10 };
	cout << "There is(are) " << count_negative_values(array, SIZE) << " negative value(s)" << endl;
}
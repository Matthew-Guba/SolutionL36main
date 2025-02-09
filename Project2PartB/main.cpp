#include <iostream>
#define SIZE 10
using namespace std;
int count_values_equal_N(int* array, int size, int n);


int main() {
	int array[SIZE] = { -1,2,1,4,1,-6,0,7,0,-10 };
	int n;

	cout << "Enter a number " << endl;
	cin >> n;

	cout << "There is(are) " << count_values_equal_N(array, SIZE, n) << " absolute value(s) equal to " << n << endl;
}
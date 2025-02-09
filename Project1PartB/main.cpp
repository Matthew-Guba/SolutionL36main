#include <iostream>
#define SIZE 10
using namespace std;

int count_values_bigger_N(int* array, int size, int n);

int main() {
	int array[SIZE] = { -1,2,3,4,5,-6,0,7,0,-10 };
	int n;

	cout << "Enter a number " << endl;
	cin >> n;

	cout << "There is(are) " << count_values_bigger_N(array, SIZE, n) << " value(s) bigger than " << n << endl;
}
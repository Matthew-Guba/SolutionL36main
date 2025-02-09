#include <iostream>
#define SIZE 10
using namespace std;

int count_values_smaller_avg(int* array, int size, double avg);
double find_avg(int* array, int size);

int main() {
	int array[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	double avg = find_avg(array, SIZE);

	cout << "There is(are) " << count_values_smaller_avg(array, SIZE, avg) << " values smaller avg " << endl;
}
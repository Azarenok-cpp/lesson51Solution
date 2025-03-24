#include "logic.h"

long long int get_factorial(int number) {
	if (number < 0) {
		return -1;
	}
	long long factorial = 1;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	return factorial;
}
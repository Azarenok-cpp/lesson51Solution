#include "logic.h"

//long long int get_factorial(int number) {
//	if (number < 0) {
//		return -1;
//	}
//
//	long long factorial = 1;
//
//	for (int i = 2; i < number; i++)
//	{
//		factorial *= i;
//	}
//
//	return factorial;
//}

long long get_factorial(int n) {
	if (n < 0) {
		return -1;
	}
	if (n <= 1) {
		return 1;
	}

	return get_factorial(n - 1) * n;
}
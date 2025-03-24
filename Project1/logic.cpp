#include "logic.h"

long long int get_fibbonaci_by_number(int number) {
	long long first = 0;
	long long second = 1;
	long long current = 1;

	for (int i = 0; i < number - 3; i++)
	{
		first = second;
		second = current;
		current = first + second;
	}

	return current;
}
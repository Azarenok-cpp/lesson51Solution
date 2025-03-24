#include "logic.h"

long long int get_fibbonaci_by_number(int n) {
	/*long long first = 0;
	long long second = 1;
	long long current = 1;

	for (int i = 0; i < number - 3; i++)
	{
		first = second;
		second = current;
		current = first + second;
	}

	return current;*///fib(6) = fib(5) + fib(4)
	/*
	
	
	*/
	if (n <= 0) {
		return -1;
	}

	if (n <= 2) {
		return n - 1; //1 -> 0; 2 -> 1
	}

	return get_fibbonaci_by_number(n - 1) + get_fibbonaci_by_number(n - 2);

}


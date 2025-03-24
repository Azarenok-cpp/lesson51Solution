#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "number: ";
	cin >> number;

	long long answer = get_fibbonaci_by_number(number);

	cout << number << " fib number is " << (answer == -1 ? "Error!" : to_string(answer));

	return 0;
}
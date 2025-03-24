#include "logic.h"
using namespace std;

int main() {
	int number;

	cout << "number: ";
	cin >> number;

	long long answer = get_factorial(number);

	cout << number << "! = " << (answer == -1 ? "Error!" : to_string(answer));

	return 0;
}
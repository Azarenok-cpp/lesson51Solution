#include "logic.h"
using namespace std;
void test(int count) {
	cout << (count++) << endl;
	test(count);
}
int main() {
	int number;

	cout << "number: ";
	cin >> number;

	long long answer = get_fibbonaci_by_number(number);

	cout << number << " fib number is " << (answer == -1 ? "Error!" : to_string(answer));
	//cout << number << "! = " << answer;

//label:
//	cout << "This... is... GOTO\n";
//	goto label;


	
	return 0;
}
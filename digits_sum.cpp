// 7. Write a code to find the sum of the digits of a given number. Display the sum.

#include <iostream>
using namespace std;

int main() 
{
	int number, sum = 0;

	cout << "Enter a number: ";
	cin >> number;

	for (int digit; number != 0; digit = digit + sum) {
		digit = number % 10;
		number = number / 10;
		sum = sum + digit;
	}
	cout << "Sum: " << sum << endl;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << endl << "Please enter a number: "; cin >> number;

	cout << endl << "Here is your choice: " << number;

	cout << "\n\n" << "Your number is divisible by";

	if (number % 2 == 0) cout << " 2";
	if (number % 3 == 0) cout << " 3";
	if (number % 5 == 0) cout << " 5";
	if (number % 7 == 0) cout << " 7";
	if (number % 2 != 0 and number % 3 != 0 and number % 5 != 0 and number % 7 != 0) cout << " none of them..";

	cout << endl;
}

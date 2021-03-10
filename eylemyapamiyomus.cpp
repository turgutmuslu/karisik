#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << endl << "Please enter a number: "; cin >> number;

	cout << endl << "Here is your choice: " << number;

	cout << "Your number is divisible by";

	if (number % 2 == 0) cout << " 2";
	else if (number % 3 == 0) cout << " 3";
	else if (number % 5 == 0) cout << " 5";
	else if (number % 7 == 0) cout << " 7";
	else cout << "none of them..";

	cout << endl;
}

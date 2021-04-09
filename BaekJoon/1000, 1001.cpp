#include <iostream>

using namespace std;

int main()
{
	// {{ 1000
	int num1, num2;

	cin >> num1 >> num2;

	cout << num1 + num2;
	// }}

	// {{ 1001
	int num1, num2;

	while (1)
	{
		cin >> num1 >> num2;

		if (num1 > 0 && num2 < 10)
			break;
	}

	cout << num1 - num2;
	// }}
}
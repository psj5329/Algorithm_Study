#include <iostream>

using namespace std;

int main()
{
	int num;
	int round = 0;

	while (1)
	{
		cin >> num;

		if (num >= 0 && num <= 99)
			break;
	}

	int temp = num;

	while (1)
	{
		round++;

		if (num < 10)
			num = num * 10 + num;
		else
		{
			int ten = num / 10;
			int one = num % 10;

			num = one * 10 + ((ten + one) % 10);
		}

		if (temp == num)
			break;
	}

	cout << round;
}
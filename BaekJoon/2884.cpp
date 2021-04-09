#include <iostream>

using namespace std;

int main()
{
	int H, M;

	while (1)
	{
		cin >> H >> M;

		if (H >= 0 && H <= 23 && M >= 0 && M <= 59)
			break;
	}

	M -= 45;

	if (M < 0)
	{
		M = 60 + M;

		H -= 1;
		if (H < 0)
			H = 24 + H;
	}

	cout << H << " " << M;
}
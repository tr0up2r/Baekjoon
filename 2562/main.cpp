#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int arr[9] = {};
	int maxValue = -1;
	int maxIndex = -1;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
			maxIndex = i+1;
		}
	}

	std::cout << maxValue << '\n' << maxIndex << '\n';

	return 0;
}
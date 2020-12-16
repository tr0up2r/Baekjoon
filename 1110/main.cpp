#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int inputNum = 0;
	int cycleNum = -1;

	std::cin >> inputNum;

	int units = 0;
	int tens = 0;
	int cycleLen = 0;
	int tempNum = inputNum;

	while (inputNum != cycleNum)
	{
		cycleLen++;
		units = tempNum % 10;
		tens = tempNum / 10;

		cycleNum = (units * 10) + ((units + tens) % 10);
		tempNum = cycleNum;
	}

	std::cout << cycleLen << '\n';

	return 0;
}
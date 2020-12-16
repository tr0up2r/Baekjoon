#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int num1 = 0;
	int num2 = 0;
	while (true)
	{
		std::cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0)
			break;

		std::cout << num1 + num2 << '\n';
	}

	return 0;
}
#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int X = 0;
	std::cin >> X;

	int tmp = 0;
	int ratio = 1;
	while (true)
	{
		tmp += ratio;
		if (tmp < X)
			ratio++;
		else
			break;
	}

	int num1 = 1, num2 = ratio; // 분자, 분모
	for (int i = 0; i < (tmp - X); i++)
	{
		num1++;
		num2--;
	}

	if (ratio % 2 == 1)
		std::cout << num1 << "/" << num2 << '\n';
	else
		std::cout << num2 << "/" << num1 << '\n';

	return 0;
}
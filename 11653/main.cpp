#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;

	int factor = 2;
	while (N != 1)
	{
		if (N % factor == 0)
		{
			N /= factor;
			std::cout << factor << '\n';
			factor = 2;
			continue;
		}

		factor++;
	}

	return 0;
}
#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;

	int num = 0;
	bool isPrime = true;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		isPrime = true;
		std::cin >> num;

		if (num == 1)
		{
			isPrime = false;
			continue;
		}

		for (int j = 2; j <= num / 2; j++)
		{
			if (num % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			count++;
	}

	std::cout << count << '\n';

	return 0;
}
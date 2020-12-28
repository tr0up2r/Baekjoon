#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int M, N;
	std::cin >> M >> N;

	int sum = 0;
	int min = 10001;
	for (int i = M; i <= N; i++)
	{
		bool isPrime = true;
		if (i == 1)
			continue;

		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
			
		}

		if (isPrime)
		{
			sum += i;
			if (min == 10001)
				min = i;
		}
	}

	if (min == 10001)
		std::cout << -1 << '\n';
	else 
		std::cout << sum << '\n' << min << '\n';

	return 0;
}
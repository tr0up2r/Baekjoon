#include <iostream>

void eratos(int n1, int n2)
{
	bool* primeArray = new bool[n2 + 1];

	primeArray[0] = false;
	primeArray[1] = false;

	for (int i = 2; i <= n2; i++)
		primeArray[i] = true;

	for (int i = 2; i * i <= n2; i++)
	{
		if (primeArray[i])
		{
			for (int j = i * i; j <= n2; j += i)
				primeArray[j] = false;
		}
	}

	int count = 0;
	for (int i = n1 + 1; i <= n2; i++)
	{
		if (primeArray[i])
			count++;
	}

	std::cout << count << '\n';

	return;
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int n;
	while (true)
	{
		std::cin >> n;
		if (n == 0)
			break;
		eratos(n, n * 2);
	}

	return 0;
}
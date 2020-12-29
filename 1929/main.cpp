#include <iostream>

void eratos(int M, int N)
{
	bool* primeArray = new bool[N+1];

	for (int i = 2; i <= N; i++)
		primeArray[i] = true;

	for (int i = 2; i * i <= N; i++)
	{
		if (primeArray[i])
		{
			for (int j = i * i; j <= N; j += i)
				primeArray[j] = false;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (primeArray[i])
			std::cout << i << '\n';
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int M, N;
	std::cin >> M >> N;

	eratos(M, N);

	return 0;
}
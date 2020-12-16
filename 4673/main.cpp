#include <iostream>

#define N 10001

int d(int n)
{
	int newN = 0;
	newN += n;

	while (n != 0)
	{
		newN += n % 10;
		n /= 10;
	}
	
	return newN;
}

int main(void)
{
	bool index[N] = { false, };
	for (int i = 1; i < N; i++)
	{
		if (d(i) < N)
			index[d(i)] = true;
	}

	for (int i = 1; i < N; i++)
	{
		if (!index[i])
			std::cout << i << '\n';
	}

	return 0;
}
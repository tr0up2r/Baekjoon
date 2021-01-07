#include <iostream>

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::cout << factorial(N) << '\n';

	return 0;
}
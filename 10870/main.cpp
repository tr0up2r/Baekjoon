#include <iostream>

int fibonacci(int n)
{
	if (n > 1)
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		return n;
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::cout << fibonacci(N) << '\n';

	return 0;
}
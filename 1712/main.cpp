#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int A, B, C;

	std::cin >> A >> B >> C;

	std::cout << ((B >= C) ? -1 : (A / (C - B)) + 1) << '\n';

	return 0;
}
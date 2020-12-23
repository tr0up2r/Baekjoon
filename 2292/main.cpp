#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;
	int num = 1;
	int ratio = 6;
	int cnt = 1;

	while (num < N)
	{
		num += ratio;
		cnt++;
		ratio += 6;
	}

	std::cout << cnt << '\n';

	return 0;
}
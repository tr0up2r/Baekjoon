#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N;
	std::cin >> N;

	int* arr = new int[N];

	// 문제 조건 잘 읽자...
	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	std::cout << min << ' ' << max << '\n';

	return 0;
}
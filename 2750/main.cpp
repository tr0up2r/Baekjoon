#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;
	int* nums = new int[N];

	for (int i = 0; i < N; i++)
		std::cin >> nums[i];

	int tmp;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (nums[i] > nums[j])
			{
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		std::cout << nums[i] << '\n';

	return 0;
}
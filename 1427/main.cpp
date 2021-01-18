#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::string N;
	std::cin >> N;

	char tmp;
	for (int i = 0; i < N.size() - 1; i++)
	{
		for (int j = i + 1; j < N.size(); j++)
		{
			if (N[i] < N[j])
			{
				tmp = N[i];
				N[i] = N[j];
				N[j] = tmp;
			}
		}
	}

	std::cout << N << '\n';

	return 0;
}
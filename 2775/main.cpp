#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int T = 0;
	std::cin >> T;

	int k, n;
	for (int t = 0; t < T; t++)
	{
		int apart[15][14] = { 0, };

		for (int i = 0; i < 14; i++)
			apart[0][i] = i + 1;

		std::cin >> k >> n;
		for (int i = 1; i <= k; i++)
		{
			for (int j = 0; j < n; j++)
			{
				apart[i][j] += apart[i - 1][j];
				if (j + 1 != n)
					apart[i][j + 1] += apart[i][j];
			}
		}
		std::cout << apart[k][n-1] << '\n';
	}

	return 0;
}
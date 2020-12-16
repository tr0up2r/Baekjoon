#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int C = 0;
	std::cin >> C;

	int* scoreArray = nullptr;
	int N = 0;
	int sum;
	double avg;
	int student;

	for (int i = 0; i < C; i++)
	{
		sum = 0;
		avg = 0;
		student = 0;

		std::cin >> N;
		scoreArray = new int[N];
		
		for (int j = 0; j < N; j++)
		{
			std::cin >> scoreArray[j];
			sum += scoreArray[j];
		}

		avg = (double)sum / N;

		for (int j = 0; j < N; j++)
		{
			if ((double)scoreArray[j] > avg)
				student++;
		}

		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << (student / (double)N) * 100 << '%' << '\n';
	}

	delete[] scoreArray;

	return 0;
}
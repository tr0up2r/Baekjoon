#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;

	double* scoreArr = new double[N];
	double max = -1;

	for (int i = 0; i < N; i++)
	{
		std::cin >> scoreArr[i];
		if (scoreArr[i] > max)
			max = scoreArr[i];
	}

	double avg = 0;
	for (int i = 0; i < N; i++)
	{
		scoreArr[i] = (scoreArr[i] / max) * 100;
		avg += scoreArr[i];
	}

	avg /= N;

	std::cout << avg << '\n';

	return 0;

}
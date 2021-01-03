#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::string A, B;
	std::cin >> A >> B;

	if (A.size() != B.size())
	{
		std::string zero = "";
		int sub = A.size() - B.size();
		for (int i = 0; i < std::abs(sub); i++)
			zero += '0';

		if (sub < 0)
			A = zero + A;
		else
			B = zero + B;
	}

	std::string sum = "";
	int mSum;
	int rounds = 0;
	char a, b;
	for (int i = A.size() - 1; i >= 0; i--)
	{
		mSum = 0;

		a = A[i], b = B[i];
		mSum = rounds + ((int)a - 48) + ((int)b - 48);

		if (i == 0)
		{
			sum = std::to_string(mSum) + sum;
			break;
		}

		if (mSum >= 10)
			rounds = 1, mSum -= 10;
		else
			rounds = 0;

		sum = std::to_string(mSum) + sum;
	}

	std::cout << sum << '\n';

	return 0;
}
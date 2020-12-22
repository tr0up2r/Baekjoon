#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::string num = "";

	std::cin >> N;
	std::cin >> num;

	int sum = 0;
	char cNum;
	for (int i = 0; i < N; i++)
	{
		cNum = num[i];
		sum += int(cNum) - 48;
	}

	std::cout << sum << '\n';

	return 0;
}
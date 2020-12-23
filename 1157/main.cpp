#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::vector<int> counts;

	for (int i = 0; i < 26; i++)
		counts.push_back(0);

	std::string word = "";
	std::cin >> word;

	for (char c : word)
	{
		if (((int)c) > 96)
			counts[((int)c - 97)]++;
		else
			counts[((int)c) - 65]++;
	}

	int max = -1;
	int maxIndex = -1;
	for (auto i = 0; i < counts.size(); i++)
	{
		if (counts[i] > max)
		{
			max = counts[i];
			maxIndex = i;
		}
	}

	int maxCnt = 0;
	for (int num : counts)
	{
		if (num == max)
			maxCnt++;
	}

	if (maxCnt > 1)
		std::cout << "?" << '\n';
	else
		std::cout << (char)(maxIndex + 65) << '\n';

	return 0;
}
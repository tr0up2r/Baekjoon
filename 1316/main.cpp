#include <iostream>
#include <vector>

#define ALPHABET_COUNT 26

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;
	std::cin >> N;

	std::string word = "";
	std::vector<int> alphaCnts;
	int groupCnt = 0;
	for (int i = 0; i < N; i++)
	{
		bool isGroup = true;
		std::cin >> word;

		for (int j = 0; j < ALPHABET_COUNT; j++)
			alphaCnts.push_back(0);

		char prevWord = '\0';
		for (char c : word)
		{
			int alphaIndex = ((int)c) - 97;
			if (alphaCnts[alphaIndex] == 0)
			{
				alphaCnts[alphaIndex]++;
				prevWord = c;
			}
			else
			{
				if (prevWord == c)
					alphaCnts[alphaIndex]++;
				else
				{
					isGroup = false;
					break;
				}
			}
		}

		if (isGroup)
			groupCnt++;

		alphaCnts.clear();
	}
	
	std::cout << groupCnt << '\n';

	return 0;
}
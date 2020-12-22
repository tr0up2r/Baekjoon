#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int T = 0;
	std::cin >> T;

	int repeatNum = 0;
	std::string repeatStr = "";
	for (int i = 0; i < T; i++)
	{
		std::cin >> repeatNum >> repeatStr;

		for (int j = 0; j < repeatStr.size(); j++)
		{
			for (int k = 0; k < repeatNum; k++)
				std::cout << repeatStr[j];
		}
		std::cout << '\n';
	}

	return 0;
}
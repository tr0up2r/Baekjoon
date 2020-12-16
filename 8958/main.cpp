#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N = 0;

	std::cin >> N;

	std::string* oxArray = new std::string[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> oxArray[i];

		int count = 0;
		int countSum = 0;
		int index = 0;
		for (int j = 0; j < oxArray[i].size(); j++)
		{
			if (oxArray[i][j] == 'O')
				countSum += ++count;				
			else
				count = 0;
		} 
		std::cout << countSum << '\n';
	}
		
	return 0;
}
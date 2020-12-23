#include <iostream>
#include <string>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::vector<std::string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	std::string input;
	std::cin >> input;

	int index = std::string::npos;
	std::string tmpInput = input;
	for (std::string cr : croatia)
	{
		while (true)
		{
			index = tmpInput.find(cr);
			if (index != std::string::npos)
			{
				std::string tmp1, tmp2;
				tmp1 = tmpInput.substr(0, index);
				tmp2 = tmpInput.substr(index + cr.length(), tmpInput.size());
				tmpInput = tmp1 + '*' + tmp2;
			}
			else
				break;
		}
	}
	std::cout << tmpInput.size() << '\n';

	return 0;
}

//int main(void)
//{
//	std::cin.tie(NULL);
//	std::cin.sync_with_stdio(false);
//	
//	std::vector<std::string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//	std::string input;
//	std::cin >> input;
//
//	int index = std::string::npos;
//	std::string tmpInput = input;
//	for (std::string cr : croatia)
//	{
//		while (true)
//		{
//			index = tmpInput.find(cr);
//			if (index == std::string::npos)
//				break;
//			else
//				tmpInput.replace(index, cr.length(), "*");
//		}
//	}
//	std::cout << tmpInput.size() << '\n';
//
//	return 0;
//}
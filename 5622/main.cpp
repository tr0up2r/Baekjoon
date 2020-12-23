#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::vector<std::string> sDial = { "", "", "ABC", "DEF", "GHI", "JKL",
										"MNO", "PQRS", "TUV", "WXYZ"};

	std::string input;
	std::cin >> input;

	int sum = 0;
	for (char c : input)
	{
		for (int i = 0; i < sDial.size(); i++)
		{
			// string���� Ư�� ���� ã���ִ� find() �Լ�
			// ã�� ���ϸ� string::npos�� return.
			if (sDial[i].find(c) != string::npos)
				sum += i + 1;
		}
	}

	std::cout << sum << '\n';

	return 0;
}
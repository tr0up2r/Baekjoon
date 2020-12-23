#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int N = 0;
	std::cin >> N;
	
	int cnt = 0;
	int tmpN = N;
	int bag5 = tmpN / 5;
	while (bag5 >= 0)
	{
		cnt = 0;
		cnt += bag5;

		tmpN = N;
		tmpN -= bag5 * 5;

		if (tmpN % 3 == 0)
		{
			cnt += (tmpN / 3);
			break;
		}
		else
			bag5--;
	}

	std::cout << (cnt ? cnt : -1) << '\n';

	return 0;
}
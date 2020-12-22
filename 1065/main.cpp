#include <iostream>

int hanNum(int X)
{
	int count = 0;
	bool isHan = true;
	int	iTemp = 0;
	for (int i = 1; i <= X; i++)
	{
		if (i < 100)
		{
			count++; 
			continue;
		}
			
		isHan = true;
		iTemp = i;
		while (iTemp >= 10)
		{
			int sub1 = (iTemp % 10) - ((iTemp / 10) % 10);
			iTemp /= 10;
			int sub2 = (iTemp % 10) - ((iTemp / 10) % 10);
			iTemp /= 10;

			if (sub1 != sub2)
			{
				isHan = false;
				break;
			}
		}
		if (isHan)
			count++;
	}
	return count;
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int X = 0;
	std::cin >> X;

	std::cout << hanNum(X) << '\n';

	return 0;
}
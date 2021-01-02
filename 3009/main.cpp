#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int x = 0;
	int y = 0;
	int x1 = 0, x1Cnt = 0;
	int x2 = 0, x2Cnt = 0;
	int y1 = 0, y1Cnt = 0;
	int y2 = 0, y2Cnt = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> x >> y;
		if (i == 0)
		{
			x1 = x;
			y1 = y;
			x1Cnt++;
			y1Cnt++;
		}
		else
		{
			if (x != x1)
				x2 = x, x2Cnt++;
			else
				x1Cnt++;
			if (y != y1)
				y2 = y, y2Cnt++;
			else
				y1Cnt++;
		}
	}

	if (x1Cnt == 1)
		x = x1;

	else
		x = x2;

	if (y1Cnt == 1)
		y = y1;
	else
		y = y2;

	std::cout << x << ' ' << y << '\n';

	return 0;
}
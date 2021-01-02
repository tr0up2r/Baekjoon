#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int tri[3];
	int max;
	int sum;
	int maxSquare;
	while (true)
	{
		std::cin >> tri[0] >> tri[1] >> tri[2];
		if (!tri[0] && !tri[1] && !tri[2])
			break;

		max = -1;
		sum = 0;
		maxSquare = 0;

		for (int side : tri)
		{
			if (side > max)
				max = side;
		}

		for (int side : tri)
		{
			if (side == max)
				maxSquare = side * side;
			else
				sum += side * side;
		}

		if (sum == maxSquare)
			std::cout << "right" << '\n';
		else
			std::cout << "wrong" << '\n';
	}

	return 0;
}
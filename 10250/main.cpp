#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int T = 0;
	std::cin >> T;

	int H = 0;
	int W = 0;
	int N = 0;
	for (int i = 0; i < T; i++)
	{
		std::cin >> H >> W >> N;
		int floor = 0;
		floor = N % H;
		if (floor == 0)
			floor = H;

		int room = 0;
		room = N / H;
		if (N % H)
			room++;

		std::cout << floor;
		if (room / 10 == 0)
			std::cout << 0;
		std::cout << room << '\n';
	}

	return 0;
}
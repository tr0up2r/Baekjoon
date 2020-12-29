#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::vector<int> subs;
	subs.push_back(std::abs(x - 0));
	subs.push_back(std::abs(y - 0));
	subs.push_back(std::abs(x - w));
	subs.push_back(std::abs(y - h));

	int min = 1001;
	for (int sub : subs)
		if (sub < min)
			min = sub;

	std::cout << min << '\n';

	return 0;
}
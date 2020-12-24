#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	
	int A = 0;
	int B = 0;
	int V = 0;

	std::cin >> A >> B >> V;

	int days = (V - B - 1) / (A - B) + 1;
	std::cout << days << '\n';

	return 0;
}
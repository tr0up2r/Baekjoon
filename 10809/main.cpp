#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	// std::cout << int('a') << '\n'; 97

	int alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	std::string str;
	std::cin >> str;

	char c;
	for (int i = 0; i < str.size(); i++)
	{
		c = str[i];
		if (alphabet[((int)c - 97)] == -1)
			alphabet[((int)c - 97)] = i;
	}

	for (int i : alphabet)
		std::cout << i << ' ';

	std::cout << '\n';

	return 0;
}
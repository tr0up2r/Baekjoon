#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::vector<std::string> words;

	std::string word;
	std::getline(std::cin, word);
	std::stringstream ss(word);

	std::string str;
	while (ss >> str)
		words.push_back(str);

	std::cout << words.size() << '\n';

	return 0;
}
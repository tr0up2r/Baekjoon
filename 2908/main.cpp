#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 뒤에서부터 비교하기
int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	std::string num1, num2;
	std::cin >> num1 >> num2;

	std::string bigger;
	int size = num1.size();
	for (int i = size - 1; i >= 0; i--)
	{
		if (num1[i] > num2[i])
		{
			bigger = num1;
			break;
		}
			
		else if (num1[i] < num2[i])
		{
			bigger = num2;
			break;
		}
	}

	for (int i = size - 1; i >= 0; i--)
		std::cout << bigger[i];
	std::cout << '\n';

	return 0;
}

// swap 하고 stoi로 비교하기
//int main(void)
//{
//	std::cin.tie(NULL);
//	std::cin.sync_with_stdio(false);
//
//	std::string nums[2] = { "", "" };
//
//	std::cin >> nums[0] >> nums[1];
//
//	char tmp;
//	for (int i = 0; i < 2; i++)
//	{
//		tmp = nums[i][0];
//		nums[i][0] = nums[i][2];
//		nums[i][2] = tmp;
//	}
//
//	if (stoi(nums[0]) > stoi(nums[1]))
//		std::cout << nums[0];
//	else
//		std::cout << nums[1];
//
//	return 0;
//}
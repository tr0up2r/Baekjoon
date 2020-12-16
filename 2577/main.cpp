#include <iostream>
// 변경 테스트용
// 테스트2

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int decimalNums[10] = { 0, };

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	std::cin >> num1 >> num2 >> num3;
	int result = num1 * num2 * num3;

	while (result != 0)
	{
		int ns = 0;
		ns = result % 10;
		switch (ns)
		{
		case 0:
			decimalNums[0]++;
			break;
		case 1:
			decimalNums[1]++;
			break;
		case 2:
			decimalNums[2]++;
			break;
		case 3:
			decimalNums[3]++;
			break;
		case 4:
			decimalNums[4]++;
			break;
		case 5:
			decimalNums[5]++;
			break;
		case 6:
			decimalNums[6]++;
			break;
		case 7:
			decimalNums[7]++;
			break;
		case 8:
			decimalNums[8]++;
			break;
		case 9:
			decimalNums[9]++;
			break;
		}
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
		std::cout << decimalNums[i] << '\n';

	return 0;
}
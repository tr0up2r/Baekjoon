// 알고리즘 문제에서 입력값 범위가 주어지지 않을 때
// cin.eof() 사용. 파일 종료까지 입력 받기

// cin.eof() - return bool type.
// eof를 읽으면 true를 return.

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int num1 = 0;
	int num2 = 0;

	while (true)
	{
		std::cin >> num1 >> num2;
		if (std::cin.eof())
			break;
		std::cout << num1 + num2 << '\n';
	}

	return 0;
}
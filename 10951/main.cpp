// �˰��� �������� �Է°� ������ �־����� ���� ��
// cin.eof() ���. ���� ������� �Է� �ޱ�

// cin.eof() - return bool type.
// eof�� ������ true�� return.

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
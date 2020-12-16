#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int arr[10] = {};
	int num = 0;
	int count = 0;
	int doesExist = false;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> num;
		num %= 42;

		for (int j = 0; j < i; j++)
		{
			if (num == arr[j])
				doesExist = true;
		}

		if (doesExist)
			arr[i] = -1;
		else
		{
			arr[i] = num;
			count++;
		}
		
		doesExist = false;
	}

	std::cout << count << '\n';

	return 0;
}
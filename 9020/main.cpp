#include <iostream>
#include <vector>

void eratos(int n)
{
	bool* primeArray = new bool[n + 1];

	primeArray[0] = false;
	primeArray[1] = false;

	for (int i = 2; i <= n; i++)
		primeArray[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (primeArray[i])
		{
			for (int j = i * i; j <= n; j += i)
				primeArray[j] = false;
		}
	}

	int count = 0;
	std::vector<int> primeNum;
	for (int i = 2; i <= n; i++)
	{
		if (primeArray[i])
			primeNum.push_back(i);
	}

	std::vector<int> num1s;
	std::vector<int> num2s;
	std::vector<int> subs;

	for (int i = 0; i < primeNum.size(); i++)
	{
		int restNum = n - primeNum[i];
		for (int j = 0; j < primeNum.size(); j++)
		{
			if (restNum == primeNum[j])
			{
				num1s.push_back(primeNum[i]);
				num2s.push_back(primeNum[j]);
				subs.push_back(primeNum[j] - primeNum[i]);
				break;
			}
		}
	}

	int min = 10001;
	int minI = 10001;
	for (int i = 0; i < subs.size(); i++)
	{
		if (subs[i] < min && subs[i] >= 0)
		{
			min = subs[i];
			minI = i;
		}		
	}

	std::cout << num1s[minI] << ' ' << num2s[minI] << '\n';
	

	if (primeArray)
		delete[] primeArray;

	return;
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int T;
	std::cin >> T;

	int n;
	for (int i = 0; i < T; i++)
	{
		std::cin >> n;
		eratos(n);
	}

	return 0;
}
#include <vector>

long long sum(const std::vector<int>& a)
{
	long long ans = 0;
	for (int num : a)
	{
		ans += num;
	}

	return ans;
}
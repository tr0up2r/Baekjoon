#include <iostream>

class Point
{
public:
	int x;
	int y;
	void print() { std::cout << x << ' ' << y << '\n'; }
};

void swap(Point *p1, Point *p2)
{
	Point tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void)
{
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);

	int N;
	std::cin >> N;

	Point* pArray = new Point[N];

	for (int i = 0; i < N; i++)
		std::cin >> pArray[i].x >> pArray[i].y;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (pArray[i].y > pArray[j].y)
			{
				swap(&pArray[i], &pArray[j]);
			}
			else if (pArray[i].y == pArray[j].y)
			{
				if (pArray[i].x > pArray[j].x)
					swap(&pArray[i], &pArray[j]);
			}
		}
	}

	for (int i = 0; i < N; i++)
		pArray[i].print();

	return 0;
}
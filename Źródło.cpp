#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec(20, 1);

	int a{ 0 };

	for (auto& x : vec)
	{
		x = 2 * a;
		std::cout << a << ": " << x << "\n";
		a++;
	}

	std::vector<std::vector<int>> b{ { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 } };

	for (const auto& row : b)
    {
        for (const auto& item : row) std::cout << item << ' ';
		std::cout << '\n';
    }

	struct Range
	{
		std::string range;
		int fmin, fmax;
	};

	std::vector<Range> Sennheiser{ {"A", 516, 558 }, {"B", 626, 668 } };

	for (const auto& x : Sennheiser) std::cout << x.range << ": " << x.fmin << "-" << x.fmax << " MHz\n";
	

	return 0;
}
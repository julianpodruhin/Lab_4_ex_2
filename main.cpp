#include <iostream>

bool input(int&, int&);

int main()
{
	int a, b;
	if (!input(a, b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}

bool input(int& a, int& b)
{
	int limit = 10;
	int bottom = 0;
	std::cout << "Input number first number: ";
	std::cin >> a;
	if (!std::cin || a > limit || a < bottom)
	{
		return false;
	}
	std::cout << "Input number second number: ";
	std::cin >> b;
	if (!std::cin || b > limit || b < bottom)
	{
		return false;
	}
	return true;
}
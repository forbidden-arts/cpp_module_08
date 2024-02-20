#include "easyfind.hpp"
#include <list>

int main()
{
	std::list<int> test;
	test.push_back(1);
	test.push_back(12);
	test.push_back(123);

	std::list<int>::const_iterator it = test.end();

	try
	{
		it = ::easyfind(test, 123);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	it = test.end();

	try
	{
		it = ::easyfind(test, 15);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	return (0);
}
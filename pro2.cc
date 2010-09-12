/* 
 * Euler project: Problem 2
 */
#include <iostream>

int
fibonatti(int n)
{
	static int moreprev = 0;
	static int prev = 1;

	int current = moreprev + prev;
	moreprev = prev;
	prev = current;

	return current;
}

int
main(void)
{
	int sum = 0;
	int current;
	int i;
	while ((current = fibonatti(i)) <= 4000000) {
		if (current%2 == 0) {
			sum += current;
			std::cout << current << ": ";
			std::cout << sum << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << sum << std::endl;

	return 0;
}

/* vim: set ts=4 sw=4: */

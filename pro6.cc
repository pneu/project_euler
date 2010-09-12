#include <iostream>


int main(void)
{
	using namespace std;
	const int Target = 100;
	/* the sum of the squares of the first one hundred natual numbers */
	int sum = Target * (Target+1) * (2*Target+1) / 6;

	/* the square of the sum of the first one hundred natual numbers */
	int square = Target * (Target+1) / 2;
	square *= square;

	cout << square - sum << endl;
	return 0;
}

/* vim: set ts=4 sw=4: */

#include <iostream>
#include <unistd.h>
using namespace std;

int main(void)
{
	const int DivMax = 20;
	int num = 2520;
	while (1) {
		for (int i=2; i<=DivMax; ++i) {
			if (num % i != 0) {
				break;
			}
			if (i == DivMax) {
				goto ANSWER;
			}
		}
		num++;
	}

ANSWER:
	cout << num << endl;
	return 0;
}

/* vim: set ts=4 sw=4: */

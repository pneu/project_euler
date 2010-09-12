#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void print_num(vector<int>& p)
{
	for (int i=0; i<p.size(); ++i) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int main(void)
{
	unsigned long long target = 600851475143;
	vector<int> prime;
	int max = (int)sqrtl(target) + 1;
	for (int i=2; i<max; ++i) {
		if (target%i == 0) {
			prime.push_back(i);
			target /= i;
		}
	}

	print_num(prime);
	return 0;
}

/* vim: set ts=4 sw=4: */

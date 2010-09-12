/* 
 * Reference Algorithm:
 * http://ja.wikipedia.org/wiki/エラトステネスの篩/
 */
#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;

void DoEratosthenes(vector<int>& pri, vector<int>& v)
{
	int64_t i;
	for (i=2; i<v.size(); i++) {
		/* ignore number strained with eratosthenes's filter */
		if (v[i] == 0) {
			continue;
		}

		/* add to primary list */
		pri.push_back(v[i]);

		/* eratosthenes's filter. assign 0 instead of strained number */
		for (int64_t j=i; j<v.size(); j++) {
			if (v[j] != 0 && v[j] % i == 0) {
				v[j] = 0;
			}
		}

		/* check whether to continue eratosthenes filter */
		for (int k = v.size() - 1; k>2; k--) {
			if (v[k] == 0) continue;
			if (v[k] <= i * i) {
				goto PUSH_REMAIN;
			} else {
				break;
			}
		}
	}

PUSH_REMAIN:
	/* push back remain number to pri */
	for (; i<v.size(); i++) {
		if (v[i] == 0) {
			continue;
		}
		pri.push_back(v[i]);
	}

#if 0
	/* print target (100001st prime number) */
	if (pri.size() > 10001) {
		cout << pri[10000] << endl;
	} else {
		cout << "not found" << endl;
	}
#endif
	int64_t sum = 0;
	for (int i=0; i<pri.size(); ++i) {
		sum += pri[i];
	}
	cout << sum << endl;
}

/* use if need */
void print_prime(vector<int>& pri)
{
	cout << "prime: ";
	for (int k=0; k<pri.size(); k++) {
		cout << pri[k] << " ";
	}
	cout << endl;
}

int main(void)
{
	const int alloc_size = 2000000;
	vector<int> table(alloc_size);
	vector<int> prime;
	for (int64_t i=0; i<table.size(); i++) {
		table[i] = i;
	}
	DoEratosthenes(prime, table);
	return 0;
}

/* vim: set ts=4 sw=4: */

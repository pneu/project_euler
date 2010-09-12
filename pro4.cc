#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool is_Palindromic(string& num)
{
	string rev;
	string::reverse_iterator it = num.rbegin();
	while (it != num.rend()) {
		char c[2]; c[0] = *it; c[1] = '\0';
		string s(c);
		rev.append(s);
		++it;
	}
	return num.compare(rev) == 0 ? true : false;
}

int main(void)
{
	string str;
	int max = 0;
	for (int i=100; i<1000; ++i) {
		for (int j=100; j<1000; ++j) {
			char buf[32];
			sprintf(buf, "%d", i*j);
			str = buf;
			if (is_Palindromic(str)) {
				int num = atoi(str.c_str());
				if (max < num) {
					max = num;
				}
			}
		}
	}
	cout << max << endl;
	return 0;
}

/* vim: set ts=4 sw=4: */

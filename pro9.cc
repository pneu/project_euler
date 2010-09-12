#include <iostream>
using namespace std;

int main(void)
{
	int aprox = 340;
	
	for (int a=aprox; a<999; a++) {
		for (int b=a-1; b>0; b--) {
			int c = 1000 - a - b;
			if (a*a+b*b == c*c) {
				cout << "a(" << a << "), b(" << b << "), c(" << c << ")" << endl;
				cout << a*b*c << endl;
			}
		}
	}
}

/* vim: set ts=4 sw=4: */

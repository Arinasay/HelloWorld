#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>



using namespace std;

int main()
{
	int a, b, c, d, num = 0, den = 0;
		char op = '+', dr = '/';

	cin >> a >> b >> c >> d;

	//cout << a << dr << b << op << c << dr << d;

	num = a * d + b * c;
	den = b * d;

	cout << num << dr << den << endl;
		den = b * d;

	return 0;
}

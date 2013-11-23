#include <iostream>

using namespace std;

int main()
{
	int sumsquares = 0;
	int squaresums = 0;

	int sumdummy = 0;

	for(int i = 1; i <=100; i++)
	{
		sumdummy += i;
		squaresums += i*i;
	}

	sumsquares = sumdummy*sumdummy;

	cout << sumsquares << "-" << squaresums << "=" << sumsquares-squaresums;
	system("pause");
	return 0;
}
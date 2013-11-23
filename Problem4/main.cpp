#include <iostream>

using namespace std;

int main()
{
	int product;
	int digit1, digit2, digit3, digit4, digit5, digit6;
	int dummy = 0;
	for(int i = 999; i > 100; i--)
	{
		for(int j = 999; j > 100; j--)
		{
			product = i*j;
			digit1 = product/100000;
			digit2 = (product - digit1*100000)/10000;
			digit3 = (product - digit1*100000 - digit2*10000)/1000;
			digit4 = (product - digit1*100000 - digit2*10000 - digit3*1000)/100;
			digit5 = (product - digit1*100000 - digit2*10000 - digit3*1000 - digit4*100)/10;
			digit6 = (product - digit1*100000 - digit2*10000 - digit3*1000 - digit4*100 - digit5*10);
			if((digit1 == digit6) && (digit2 == digit5) && (digit3 == digit4) && (product > dummy))
				dummy = product;
		}
	}

	cout << "Highest palindrome = " << dummy;
 
	system("pause");
	return 0;
}
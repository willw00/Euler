#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(long testnum);

int main()
{
	long long num;
	long long highest = 0;
	bool breakout = false;
	int repeat;

	cout << "Enter number: ";
	cin >> num;
	cout << "Number = " << num << endl;
	long long start =  num / 2 + 1;
	for(long long i = start; i >=2; i--)
	{	
		if(num % i == 0)
		{
		if(is_prime(i))
		{
			highest = i;
			breakout = true;
		}
		}
		if(breakout == true) break;
	}
	cout << endl << "Highest prime factor = " << highest << endl;
	cout << num << " / " << highest << " = " << num / highest << endl;
	system("pause");
	return 0;
}

bool is_prime(long testnum)
{
	bool checker = true;
	long testnumSquareRoot = (long)sqrt((double)testnum);

	for(int j = 2; j <= testnumSquareRoot; j++)
	{
		if(testnum % j == 0)
		{
		checker = false;
		}
		if(checker == false) break;
	}

	if(checker == false) return false;
	else return true;
}
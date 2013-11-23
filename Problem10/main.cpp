#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int testnum);

int main()
{
	long long sum = 0;
	long upperBound = 2000000;
	int upperBoundSquareRoot = (int)sqrt((double)upperBound);
	bool *isComposite = new bool[upperBound + 1];
	memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
	for(int m = 2; m <= upperBoundSquareRoot; m++)
	{
		if(!isComposite[m])
		{
			for(int k = m*m; k <= upperBound; k+=m)
			isComposite[k] = true;
		}
	}
	
	for(int m = 2; m <= upperBound; m++)
	{
		if(!isComposite[m])
			sum+=m;
	}
	cout << sum;
	system("pause");
	return 0;
}

bool is_prime(int testnum)
{
	bool checker = true;
	for(int j = 2; j <= testnum / 2; j++)
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

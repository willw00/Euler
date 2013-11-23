#include <iostream>

using namespace std;

bool is_prime(int testnum);

int main()
{
	int inc = 0;
	int testnum = 1;

	while(inc < 10001)
	{
		testnum++;
		if(is_prime(testnum)) inc++;
	}
	cout << testnum;
	system("pause");
	return 0;
}

bool is_prime(int testnum)
{
	bool checker = true;
	for(int j = 2; j <= testnum - 1; j++)
	{
		if(testnum % j == 0)
		checker = false;
	}

	if(checker == false) return false;
	else return true;
}
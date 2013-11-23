#include <iostream>

using namespace std;

int main()
{
	int testfib1 = 1;
	int testfib2 = 2;
	int counter = testfib2;
	int dummy;
	while(testfib1 <= 4000000)
	{
		//cout << counter << "   " << testfib1 << endl;
		dummy = testfib1 + testfib2;
		testfib1 = testfib2;
		testfib2 = dummy;
		if(testfib2 % 2 == 0)
		counter+= testfib2;
	}
	cout << counter;
	system("pause");
	

	return 0;
}
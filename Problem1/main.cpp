#include <iostream>

using namespace std;

int main()
{
	int return_value=0;
	cout << return_value <<endl;

	for(int i = 1; i <= 1000; i++)
	{
		if((i%3 == 0) || (i%5 == 0))
		{
		cout << i << "    " << return_value << endl;
		return_value = return_value + i;
		}
	}
	cout << "The value is: " << return_value;
	system("pause");
	return 0;
}
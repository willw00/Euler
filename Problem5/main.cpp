#include <iostream>
using namespace std;

int main()
{
	int testnum = 1;
	int tally = 0;
	bool checker = false;
	
	while(checker == false)
	{
		tally = 0;
		
		for(int i = 0; i <= 19; i++)
		{
			if(testnum % (i+1) == 0)
				tally+=1;
		}
		testnum++;
		if(tally == 20)
			checker = true;
	}

	cout <<testnum - 1;
	system("pause");

	return 0;

}
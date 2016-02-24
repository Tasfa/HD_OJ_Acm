#include <iostream>
#include <string>
using namespace std;
int main()
{
	char input[256];
	int sum;
	int tmp;
	while (cin.getline(input,256))
	{
		if (input[0] == '#')
			break;
		else
		{
			sum = 0;
			for (int i = 0; i < strlen(input); i++)
			{			
				if (' '==input[i])
				{
					tmp = 0;
				}
				else
				{
					tmp = int(input[i]) - 64;
				}
				sum += (i+1)*tmp;
			}
			cout << sum << endl;
		}
	}
	return 0;
}
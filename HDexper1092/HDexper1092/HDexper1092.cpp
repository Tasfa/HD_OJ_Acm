#include <iostream>
using namespace std;

int main()
{
	int n=1;//The number of the intergers;
	int a;
	int sum = 0;
	while(cin >> n&&n!=0)
	{ 
		sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a;
				sum += a;
			}
			cout << sum << endl;	
	}
	return 0;
}
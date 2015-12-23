#include <iostream>
using namespace std;

int main()
{
	int l;
	int n ;
	int a;
	int sum = 0;
	/*
	while (cin >> n&&(l>0))
	{
		cin >> l;
		if (0 == l)
			break;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
		l--;
	}
	*/
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> l;
			for (int j = 0; j < l; j++)
			{
				cin >> a;
				sum += a;
			}
			cout << sum << endl ;
			cout << endl;
			sum = 0;
		}
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int n;
	int i = 0;
	cin >> n;
	while (i!=n)
	{
		cin >> a >> b;
		cout << a + b << endl;
		i++;
	}
	return 0;
}
#include<iostream>
using namespace std;
int pow(int a, int b)
{
	int i, ans = 1;
	for (i = 1; i <= b; i++)
		ans *= a;
	return ans;
}
int main()
{
	int n, a, b;
	char c, d;
	while (cin >> n)
	{
		int sum = 0;
		while (n--)
		{
			int k = 0;
			cin >> a >> c >> b >> d;
			while (a)
			{
				sum += a % 10 * pow(b, k++);
				a /= 10;
			}
		}
		cout << sum << endl;
	}
}
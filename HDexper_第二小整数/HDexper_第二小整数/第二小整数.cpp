#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;

int cmp(const void *a, const void *b)
{
	return (*(int *)a - *(int*)b);
}

int main()
{
	int n, i,c, num[10005], a[10005];
	cin >> c;
	while (c--)
	{
		    cin >> n;
			int flag, flag2;
			flag = n / 2;
			flag2 = n - flag;
			memset(a, 0, sizeof(a));
			memset(num, 0, sizeof(num));
			for (i = 0; i < n; i++)
				cin >> num[i];
			qsort(num, n, sizeof(int), cmp);
			int k = 0;
			for (i = n - 1; flag2--; i--)
			{
				a[k] = num[i];
				k += 2;
			}
			k = 1;
			for (i = 0; flag--; i++)
			{
				a[k] = num[i];
				k += 2;
			}
			
			cout <<num[1];
			cout << endl;
		
	}
	return 0;
}